cat /etc/passwd | grep -v "#" | sed -n 'n;p' | rev | cut -d ":" -f7 | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed 's/,/, /'  | sed 's/,$/./'
