echo "Enter the page number "
read np
echo "Enter the pages " 
#------------------vairable --------
page=()
frame=()
hit_count=0
#----------------------------------

for ((i=0; i<np; i++))
do
	read val
	page[i]=$val
done
echo "Enter the frame size "
read f_size;

for ((i=0; i<f_size; i++))
do
	frame[i]=-1
done

#--------------main part of LRU-------------------
for ((i=0; i<np; i++))
do	hit=0
	for ((j=0; j<f_size; j++))
	do
		if [[ ${page[i]} -eq ${frame[j]} ]]
		then	hit=1
			((hit_count++))
			unset 'frame[j]'
			frame=("${frame[@]}")
			frame+=(${page[i]})
			break
		fi
	done
	if [[ $hit -eq 0 ]]
	then	placed=0
		for ((j=0; j<f_size; j++))
		do
			if [[ ${frame[j]} -eq -1 ]]
			then	placed=1
				frame[j]=${page[i]}
				break
			fi
		done
		if [[ $placed -eq 0 ]]
		then	unset 'frame[0]'
			frame=("${frame[@]}")
			frame+=(${page[i]})
		fi
	fi
	echo "For : ${page[i]} --> "
	for ((j=0; j<f_size; j++))
	do
		echo -n "${frame[j]}  "
	done
	if [[ $hit -eq 0 ]]
	then	echo "Miss "
	else	echo "Hit"
	fi
done

echo "Hit Count $hit_count"