echo "Enter the number of Process : "
read n
#-----Variable---------------
br=()
pr=()
wt=()
tat=()
#---------------------------
echo "Enter for Each burst "
for ((i=0; i<n; i++))
do
	echo "Burst $((i+1)) : "
	read val
	br[i]=$val
	pr[i]=$((i+1))
done

# Sort them according to the Burst time-----

for ((i=0; i<n; i++))
do
	for ((j=0; j<n-i-1; j++))
	do
		if [[ ${br[j]} -gt ${br[j+1]} ]]
		then
			temp=${br[j]}
			br[j]=${br[j+1]}
			br[j+1]=$temp
			
			temp2=${pr[j]}
			pr[j]=${pr[j+1]}
			pr[j+1]=$temp2
		fi
	done
done

# now Calculation -----------
wt[0]=0
tat[0]=${br[0]}

for ((i=1; i<n; i++))
do
	wt[i]=${tat[i-1]}
	tat[i]=$((${wt[i]}+${br[i]}))
done

echo "Process-------Burst time----WT------TAT"
for ((i=0; i<n; i++))
do
	echo " ${pr[i]}----- ${br[i]}------${wt[i]} ------ ${tat[i]}  "
done


