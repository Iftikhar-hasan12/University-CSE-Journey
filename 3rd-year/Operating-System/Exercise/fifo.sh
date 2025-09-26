echo "Enter the number of pages "
read np

#-----------All variable----------
page=()
frame=()
hit_count=0
index=0

#--------------------------------
echo "Enter the pages "
for ((i=0; i<np; i++))
do
	read val
	page[i]=$val
done
echo -e "\n\n Enter the Frame Size "
read f_size
for ((i=0; i<f_size; i++))
do
	frame[i]=-1;
done

for ((i=0; i<np; i++))
do
	hit=0
	for ((j=0; j<f_size; j++))
	do
		if [[ ${page[i]} -eq ${frame[j]} ]]
		then
			hit=1
			((hit_count++))
			break
		fi
	done
	if [[ $hit -eq 0 ]]
	then
		frame[index]=${page[i]}
		((index++))
	fi
	if [[ $index -eq $f_size ]]
	then
		index=0
	fi
	echo "For : ${page[i]} --> "
	for ((j=0; j<f_size; j++))
	do
		echo -n "${frame[j]}  "
	done
	if [[ $hit -eq 0 ]]
	then
		echo "Miss"
	else
		echo "Hit"
	fi
done

echo "Hit count ${hit_count}"