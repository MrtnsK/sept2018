ldapsearch -Q -LLL 'uid=z*' cn | grep "cn: z*" | cut -c 5- | sort -rf
