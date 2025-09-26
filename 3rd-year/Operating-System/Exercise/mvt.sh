# Implement MVT Memory Management Technique.
echo "Enter the total memory available -  "
read m_size
#---------variable-----------------
memory=$m_size
pr=()
sum=0
#-------------------------

for ((i=0; i<10; i++))
do
	echo "Enter memory required for process $((i+1)) : "
	read val
	if [[ $val -le $m_size ]]
	then
		echo "Memory is allocated for Process $((i+1)) "
		m_size=$((m_size-val))
		pr[i]=$val
		sum=$((sum+val))
	else
		echo "Memory is full"
		break
	fi

	echo "Do you want to continue(y/n): "
	read ch
	if [[ $ch == "n" ]]
	then	break
	fi
done

echo "Total memeory Available $memory"
echo "Process -----------------Memory Allocated "
for ((i=0;i<${#pr[@]}; i++))
do
	echo $((i+1))"----------------"${pr[i]}
done
echo "Total memory Allocated $sum"
echo "Total Framentation $((memory-sum))"


