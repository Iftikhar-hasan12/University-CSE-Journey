echo "Enter the total memory Available " 
read m_size
echo "Enter the Block Size "
read b_size
block=$((m_size/b_size))

#---------variable--------
pr=()
frag=()
sum=0
k=0
#-------------------
echo -e "\n\n Enter the Number of Proceses "
read np
for ((i=0; i<np; i++))
do
	echo "Process $((i+1)) : " 
	read val
	pr[i]=$val
done
echo "no of Block available in memory $block"

#-----------------Main mechanism---------------
for ((i=0; i<np; i++))
do
	
	if [[ ${pr[i]} -le $b_size ]]
	then
		frag[i]=$((b_size-${pr[i]}))
		sum=$((sum+b_size-${pr[i]}))
		((k++))
		
	else
		frag[i]=0
	fi
	if [[ $k -eq $block && $k -lt $np ]]
	then
		flag=1
		break
	fi
done

for ((i=0; i<${#frag[@]}; i++))
do
	echo -n "${frag[i]} "
done
echo -e "\nTotal Internal Fragmentation : $sum"
echo -e "\nTotal External Fragmentation $((m_size- (block*b_size) ))"