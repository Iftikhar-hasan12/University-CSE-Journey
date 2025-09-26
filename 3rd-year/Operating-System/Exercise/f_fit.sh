#first fit
echo "Enter the block size : "
read b_size

#---------Variable-------
block=()
pr=()
index=0
all=()
sum=0

#------------------------

for ((i=0; i<b_size; i++))
do
	echo -n "Block $((i+1)) : "
	read val
	block[i]=$val
	all[i]=0
done

echo "Enter the size Of Processes "
read p_size

for ((i=0; i<p_size; i++))
do
	echo -n "Process $((i+1)) "
	read val
	pr[i]=$val
done

#---------------Main mechanism----------
for ((i=0; i<p_size; i++))
do
	for ((j=0; j<b_size; j++))
	do
		if [[ ${pr[i]} -le ${block[j]} && ${all[j]} -eq 0 ]]
		then
			frag[i]=$((${block[j]}-${pr[i]}))
			sum=$((sum+${block[j]}-${pr[i]}))
			all[j]=1
			break
		else	
			frag[i]=0
		fi
	done
done

for ((i=0; i<${#frag[@]}; i++))
do
	echo ${frag[i]}" "
done

echo "Total int Frag $sum" 


