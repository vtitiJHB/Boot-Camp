export FT_LINE1=8
export FT_LINE2=16
cat /etc/passwd | grep -v "^\#" | awk 'NR%2==0' | cut -d: -f1 | rev | sort -r | awk -v v1="${FT_LINE1}" -v v2="${FT_LINE2}" 'NR>=v1 && NR<=v2' | paste -s -d "," - | tr "[:space:]" "." | sed 's/,/, /g'