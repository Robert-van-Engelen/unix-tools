      { manuf[$1]++ }
END   { for (name in manuf) print name, manuf[name] }
