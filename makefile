outfile: student-record.o add-end.o delete-all-record.o delete-record.o modify.o reverse-the-list.o save.o sorting.o show.o count.o num-sort.o		
	cc  student-record.c add-end.c delete-all-record.c delete-record.c modify.c reverse-the-list.c save.c sorting.c show.c count.c num-sort.c -o student

student-record.o:student-record.c
	cc -c student-record.c
add-end.o:add-end.c
	cc -c add-end.c
delete-all-record.o:delete-all-record.c
	cc -c delete-all-record.c
delete-record.o:delete-record.c
	cc -c delete-record.c
modify.o:modify.c
	cc -c modify.c
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
num-sort.o:num-sort.c
	cc -c num-sort.c



