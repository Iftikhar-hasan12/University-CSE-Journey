echo "Enter the number of Process : "
read n
#-----Variable---------------
br=()
pr=() # Processes Array 
wt=()
tat=()
po=() # Priority Array 
wt_avg=0
#---------------------------
echo "Enter for Each burst "

for ((i=0; i<n; i++))
do
	echo "Burst $((i+1)) : "
	read val
	br[i]=$val
	pr[i]=$((i+1))
done

echo "Enter for Each Priority "

for ((i=0; i<n; i++))
do
	echo "Priority $((i+1)) : "
	read val
	po[i]=$val
	
done




# Sort them according to the Priority time-----

for ((i=0; i<n; i++))
do
	for ((j=0; j<n-i-1; j++))
	do
		if [[ ${po[j]} -gt ${po[j+1]} ]]
		then
			temp=${br[j]}
			br[j]=${br[j+1]}
			br[j+1]=$temp
			
			temp2=${pr[j]}
			pr[j]=${pr[j+1]}
			pr[j+1]=$temp2
	

			temp3=${po[j]}
			po[j]=${po[j+1]}
			po[j+1]=$temp3


		fi
	done
done

# now Calculation -----------
wt[0]=0
tat[0]=${br[0]}

for ((i=1; i<n; i++))
do
	wt[i]=${tat[i-1]}
	wt_avg=$((${wt[i]}+wt_avg))
	tat[i]=$((${wt[i]}+${br[i]}))
done

echo "Process-------Priority ---- Burst time----WT------TAT"
for ((i=0; i<n; i++))
do
	echo " ${pr[i]}----${po[i]}---- ${br[i]}------${wt[i]} ------ ${tat[i]}  "
done

wt_avg=$(awk "BEGIN {printf\"%.2f\", $wt_avg/$n}")
echo "Wait Average $wt_avg"


