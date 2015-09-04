ARRAY=( "2:0"
        "4:3"
				"5:4"
				"6:2"
				"8:3"
				"9:2"
				"10:4"
				"11:10"
				"12:2"
				"13:12"
				"14:6"
				"15:2"
				"16:3"
				"100:3"
				"101:100"
				"225:2"
				"226:112"
				"104659:104658"
				"104660:3"
				"104661:2"
        "26:12"
        "31:30"
        "3:2" )

for x in "${ARRAY[@]}" ; do
    KEY="${x%%:*}"
    VALUE="${x##*:}"
		RES=`echo $KEY  | /c/dev/Python33/python solution.py`
    printf "k=%s, res=%s, expected=%s\n" "$KEY" "$RES" "$VALUE"
		if [ "$RES" -ne "$VALUE" ]
    then
        echo "----------------- ERROR: for key=$KEY : GOT $RES EXPECTED $VALUE"
    fi
done
