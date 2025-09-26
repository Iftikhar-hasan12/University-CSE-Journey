#Worst fit Allocation
echo "Enter the Block Size "
read b_size

#--------Variable---------
block=()
pr=()
all=()
frag=()

#------------------------
echo "Enter size of Each block "
for ((i=0; i<b_size; i++))
do
	echo "Block $((i+1)) : "
	read val
	block[i]=$val
	all[i]=0
done


echo "Enter the Process size "
read p_size

for ((i=0; i<p_size; i++))
do
	echo "Procss $((i+1)) : "
	read val
	pr[i]=$val
done

for ((i=0; i<p_size; i++))
do	id=-1
	maxi=0
	for ((j=0; j<b_size; j++))
	do
		if [[ ${pr[i]} -le ${block[j]} && ${block[j]} -gt $maxi && ${all[j]} -eq 0 ]]
		then
			maxi=${block[j]}
			id=$((j))
		fi
	done
	if [[ $id -ne -1 ]]
	then
		frag[i]=$((${block[id]}-${pr[i]}))
		all[id]=1
	else
		frag[i]=0
	fi
done

for ((i=0; i<${#frag[@]}; i++))
do
	echo ${frag[i]}" "
done

