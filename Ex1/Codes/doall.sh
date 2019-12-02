#./ren.py		#Rename all files to 1,2...
#make			#Generate executable for each file.


for t in ../testcases/*;
do
	echo "TESTCASE : $t : "
	
	echo " "
	
	for f in *; 
	do 
		if [[ "$f" != *".c" ]] ; 
		then
			echo -n "$f : ";
			./$f < $t ;
			
			echo  " "
		fi 
	done
	
	echo $"\n\n";
done
