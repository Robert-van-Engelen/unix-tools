BEGIN {
        yearsum = 0; costsum = 0
        newcostsum = 0; newcount = 0
      }
      {
        yearsum += $3
        costsum += $5
      }
$3 > 2000 { newcostsum += $5; newcount++ }
END   {
        printf "Average age of cars is %4.1f years\n",\
            2006 - (yearsum/NR)
        printf "Average cost of cars is $%7.2f\n",\
            costsum/NR
        printf "Average cost of newer cars is $%7.2f\n",\
            newcostsum/newcount
      }
