#---------------------Function Part----------------------------

minFreq(){
	local mini=99999
	for ((i=0; i<f_size; i++))
	do
		if [[ ${freq[${frame[i]}]} -lt $mini ]]
		then
			mini=${freq[${frame[i]}]}
		fi
	done
	echo $mini



}



updateFrame(){
	local val=$1
	local mini=$(minFreq)
	for ((i=0; i<f_size; i++))
	do
		if [[ ${freq[${frame[i]}]} -eq $mini ]]
		then
			#unset 'freq[${frame[i]}]'
			unset freq[${frame[i]}]
			frame[i]=$val
			((freq[${frame[i]}]++))
			break
		fi
	done
			




}










#--------------------------------------------------------------




echo "Enter the page size "
read np
echo "Enter the pages "

#-----------Variable----------
page=()
frame=()
hit_count=0
freq=()
#-----------------------------

for ((i=0; i<np; i++))
do	read val
	page[i]=$val
done

echo "Enter the Frame size "
read f_size;

for ((i=0; i<f_size; i++))
do
	frame[i]=-1
done


#-------------Main mechanism -----------------------

for ((i=0; i<np; i++))
do	hit=0
	for ((j=0; j<f_size; j++))
	do
		if [[ ${page[i]} -eq ${frame[j]} ]]
		then
			hit=1
			((hit_count++))
			((freq[${frame[j]}]++))
			break
		fi
	done
	if [[ $hit -eq 0 ]]
	then	place=0
		for ((j=0; j<f_size; j++))
		do	
			if [[ ${frame[j]} -eq -1 ]]
			then	frame[j]=${page[i]}
				((freq[${frame[j]}]++))
				place=1
				break
			fi
		done
		if [[ $place -eq 0 ]]
		then
			updateFrame ${page[i]}
		fi
	fi


	#-----------Print Section --------------------
	echo -n "For ${page[i]} --> "
	
	for ((j=0; j<f_size; j++))
	do
		echo -n "  ${frame[j]}"
	done
	if [[ $hit -eq 1 ]]
	then	echo " Hit"
	else	echo " miss"
	fi
done
echo "Total Hit count : $hit_count"
echo "Total Miss count : $((np-hit_count))"
			

