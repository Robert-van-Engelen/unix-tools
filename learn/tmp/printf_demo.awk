BEGIN {
        print "                                 Miles"
        print "Make       Model       Year      (000)       Price"
        print \
        "--------------------------------------------------"
      }
      {
        if ($1 ~ /ply/)  $1 = "plymouth"
        if ($1 ~ /chev/) $1 = "chevrolet"
        printf "%-10s %-8s    %2d   %5d     $ %8.2f\n",\
            $1, $2, $3, $4, $5
      }
