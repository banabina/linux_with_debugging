# tracer: function
#
# entries-in-buffer/entries-written: 10/10   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
 linux_utility_f-1368  [000] ....  3899.913801: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
 linux_utility_f-1368  [000] ....  3899.913839: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ef184b8
 linux_utility_f-1368  [000] ....  3899.914607: sched_process_exit: comm=linux_utility_f pid=1368 prio=120
          <idle>-0     [002] ..s.  3899.953400: sched_process_free: comm=linux_utility_f pid=1368 prio=120
            bash-1048  [002] ....  3905.519729: sys_clone+0x14/0x38 <-ret_fast_syscall+0x0/0x28
            bash-1048  [002] ....  3905.519761: <stack trace>
 => sys_clone+0x18/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7efe12b0
            bash-1048  [002] ....  3905.520183: sched_process_fork: comm=bash pid=1048 child_comm=bash child_pid=1376
   get_ftrace.sh-1376  [000] ....  3905.521627: search_binary_handler+0x10/0x30 <-load_script+0x24c/0x2fc
   get_ftrace.sh-1376  [000] ....  3905.521662: <stack trace>
 => search_binary_handler+0x14/0x30
 => load_script+0x24c/0x2fc
 => search_binary_handler.part.2+0xac/0x24c
 => __do_execve_file+0x52c/0x7d0
 => sys_execve+0x44/0x4c
 => ret_fast_syscall+0x0/0x28
 => 0x7efe1354
   get_ftrace.sh-1376  [000] ....  3905.522438: sched_process_exec: filename=./get_ftrace.sh pid=1376 old_pid=1376
