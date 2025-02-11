BEGIN { FS="," }
{ print NR, $1 }
END { print "records:", NR }
