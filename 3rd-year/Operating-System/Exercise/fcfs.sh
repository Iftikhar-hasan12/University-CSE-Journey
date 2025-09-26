echo "Enter the Number of Process " 
read n
#--------Variable---------------
br=()
wt=()
tat=()
wt_avg=0
tat_avg=0
#--------------------------

for ((i=0; i<n; i++))
do
	echo "Brust time $((i+1))"
	read val
	br[i]=$val
done
wt[0]=0
tat[0]=$((${br[0]}))

for ((i=1; i<n; i++))
do
	wt[i]=${tat[i-1]}
	wt_avg=$((wt_avg+${wt[i]}))
	
	tat[i]=$((${wt[i]}+${br[i]}))
	tat_avg=$((tat_avg+${tat[i]}))
done
tat_avg=$((tat_avg+${tat[0]}))


echo "Proces----Burst-----WAT-----TAT"
for ((i=0; i<n; i++))
do
	echo "p$((i))---${br[i]}----${wt[i]}-----${tat[i]}"
done

tat_avg=$(echo "scale=2; $tat_avg/$n" | bc -l)
wt_avg=$(echo "scale=2; $wt_avg/$n" | bc -l)
echo "Average waiting time $wt_avg"
echo "Average TAT $tat_avg"


	
	