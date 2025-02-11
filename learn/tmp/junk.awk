BEGIN { s = 0 }
$2 == "toys" { s = s + $3 }
END { print s }
