b main
r
source scripts/create_list.gdb
source scripts/print_list.gdb
source scripts/free_list.gdb
set $head = (List**)malloc(sizeof(List*))
set logging file result-bubble
create_list (*($head)) 12 4 5
set $_head = (*($head))
set logging on
p "test begin"
p "old_list"
printf_list (*($head))
set logging off
p bubble_sort($head)
set logging on
p "new_list"
printf_list (*($head))
set logging off
free_list (*($head))
create_list (*($head)) 456 78 41 25 1 47
set $_head = (*($head))
set logging on
p "test begin"
p "old_list"
printf_list (*($head))
set logging off
p bubble_sort($head)
set logging on
p "new_list"
printf_list (*($head))
set logging off
free_list (*($head))
create_list (*($head)) 7 5 97 6 3 7 8
set $_head = (*($head))
set logging on
p "test begin"
p "old_list"
printf_list (*($head))
set logging off
p bubble_sort($head)
set logging on
p "new_list"
printf_list (*($head))
set logging off
free_list (*($head))
q
y
