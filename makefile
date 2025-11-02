outfile: add-begin.o delete-all-record.o delete-record.o modify.o student-record.o reverse-the-list.o save.o sorting.o show.o count.o
	cc add-begin.c delete-all-record.c delete-record.c modify.c student-record.c reverse-the-list.c save.c sorting.c show.c count.c -o student

add-begin.o:add-begin.c
	cc -c add-begin.c
delete-all-record.o:delete-all-record.c
	cc -c delete-all-record.c
delete-record.o:delete-record.c
	cc -c delete-record.c
modify.o:modify.c
	cc -c modify.c
student-record.o:student-record.c
	cc -c student-record.c
reverse-the-list.o:reverse-the-list.c
	cc -c reverse-the-list.c
save.o:save.c
	cc -c save.c
sorting.o:sorting.c
	cc -c sorting.c
show.o:show.c
	cc -c show.c
count.o:count.c
	cc -c count.c



