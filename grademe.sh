#!/bin/bash
flag=0
if [ ! -e ./a.out ]; then
	clang++ $1.cpp
	flag=1
fi

for i in 1 2 3 4 5
do
	path=../CPS\(채점폴더\)/`ls ../CPS\(채점폴더\) | grep "^$1[.+]"`
	SECONDS=0
	if [[ ! -e ${path}/in${i}.txt ]]; then
		echo "Error: There is no grading file"
		exit 0
	fi
	./a.out < "${path}/in${i}.txt" > out
	value=`diff out "${path}/out${i}.txt"`
	rm out
	time=${SECONDS}
	echo -n "Test ${i}: "
	if [ -z "${value}" ]; then
		echo -e "\033[32mok\033[0m"
	elif [ ${time} -ge 1 ]; then
		echo -e "\033[33mtimeout\033[0m"
	else
		echo -e "\033[31mfail\033[0m"
	fi
done

if [ ${flag} -eq 1 ]; then
	rm ./a.out
fi
