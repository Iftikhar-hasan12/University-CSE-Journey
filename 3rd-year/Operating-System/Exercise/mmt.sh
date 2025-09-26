# Implement a code to solve the Memory Management technique problem.

echo " Enter the number of Block "
read b_size
#---------variable------------
block=()
pr=()
all=()
frag=()
block_size=()
b_no=()
track=()
#------------------------------



for ((i=0; i<b_size; i++))
do
	echo "Block  $((i+1)) : "
	read val
	block[i]=$val
	all[i]=0
done

echo "enter the number of Process " 
read np



for ((i=0; i<np; i++))
do
	echo "Process $((i+1)) : "
	read val
	pr[i]=$val
done


# -----------Main mechanism----------

for ((i=0; i<np; i++))
do
	for((j=0; j<b_size; j++))
	do
		if [[ ${pr[i]} -le ${block[j]} && ${all[j]} -eq 0 ]]
		then
			frag[i]=$((${block[j]}-${pr[i]}))
			all[j]=1
			#-----------
			b_no[i]=$((j+1))
			block_size[i]=${block[j]}
			track[i]="YES"

			#---------



			break
		else
			frag[i]=0
			b_no[i]=0
			block_size[i]=0
			track[i]="NO"
		fi

	done
done



echo "Processes -----Processes Size ------Blocks No-------Blocks size------Allocated------Int.Frag "
for ((i=0; i<np; i++))
do
	echo $((i+1))"-------"${pr[i]}"----------" ${b_no[i]}"------"${block_size[i]}" --------"${track[i]}"---------"${frag[i]}
done




















