
all: demo
	echo 'Hello'

# proc proc CODE=ANSI_C SQLCHECK=FULL 
# include=/home/rmikula/Devel/github/aix-cz/SrcEB/SrcLib 
# userid=mikular/Kurwamornavas6x.@M24CZDEV.WORLD common_parser=yes 
# sys_include=/usr/lib/gcc/x86_64-redhat-linux/14/include 
# sys_include=/usr/local/include 
# sys_include=/usr/include 
# include=/home/rmikula/Devel/github/aix-cz/SrcEB/SrcTest 
# INTYPE=/home/rmikula/Devel/github/aix-cz/SrcEB/SrcTest/navdemo.typ 
# lines=yes ONAME=main.c LNAME=main.lis /home/rmikula/Devel/github/aix-cz/SrcEB/SrcTest/main.pc	
main.c: main.pc
	proc CODE=ANSI_C SQLCHECK=FULL userid=mikular/Kurwamornavas6x.@M24CZDEV.WORLD common_parser=yes  sys_include=/usr/lib/gcc/x86_64-redhat-linux/14/include sys_include=/usr/local/include sys_include=/usr/include include=/home/rmikula/Devel/github/aix-cz/SrcEB/SrcTest INTYPE=navdemo.typ lines=yes ONAME=main.c main.pc

demo: main.c
	gcc -g -o demo -I /usr/include/oracle/19.29/client64 -L /usr/lib/oracle/19.29/client64/lib  -L /opt/mqm/lib64/compat  -Wl,-rpath,/usr/lib/oracle/19.29/client64/lib:/opt/mqm/lib64/compat -lclntsh main.c

