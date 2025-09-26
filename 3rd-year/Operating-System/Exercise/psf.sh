echo "Enter the Process no "
read n

#-----variable------
pr=()
po=()
br=()
wt=()
tat=()
#------------------

echo "Enter each Process Burst & Priority "

for ((i=0; i<n; i++))
do
	echo "Burst : "
	read val
	br[i]=$val
	echo "Priority : "
	read val2
	po[i]=$val2 
	pr[i]=$((i+1))
done



# Sort them Priority -->  sjf --> fcfs


for ((i=0; i<n; i++))
do
	for ((j=0; j<n-1-i; j++))
	do
		if [[ ${po[j]} -gt ${po[j+1]} ]]
		then
			temp=${po[j]}
			po[j]=${po[j+1]}
			po[j+1]=$temp

			temp1=${br[j]}
			br[j]=${br[j+1]}
			br[j+1]=$temp1

			temp2=${pr[j]}
			pr[j]=${pr[j+1]}
			pr[j+1]=$temp2


		elif [[ ${po[j]} -eq ${po[j+1]} && ${br[j]} -gt ${br[j+1]} ]]
		then
			temp=${po[j]}
			po[j]=${po[j+1]}
			po[j+1]=$temp

			temp1=${br[j]}
			br[j]=${br[j+1]}
			br[j+1]=$temp1

			temp2=${pr[j]}
			pr[j]=${pr[j+1]}
			pr[j+1]=$temp2
		fi
	done
done

wt[0]=0
tat[0]=${br[0]}



for ((i=1; i<n; i++))
do
	wt[i]=${tat[i-1]}
	tat[i]=$((${wt[i]}+${br[i]}))

done



echo "Process-------Priority ---- Burst time----WT------TAT"
for ((i=0; i<n; i++))
do
	echo " ${pr[i]}----${po[i]}---- ${br[i]}------${wt[i]} ------ ${tat[i]}  "
done
