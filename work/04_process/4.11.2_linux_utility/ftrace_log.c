# tracer: function
#
# entries-in-buffer/entries-written: 120/120   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
 linux_utility_f-1222  [002] ....  3414.520497: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
 linux_utility_f-1222  [002] ....  3414.520532: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7e8074a8
 linux_utility_f-1222  [002] ....  3414.521292: sched_process_exit: comm=linux_utility_f pid=1222 prio=120
          <idle>-0     [000] ..s.  3414.580075: sched_process_free: comm=linux_utility_f pid=1222 prio=120
            cron-353   [000] ....  3417.391247: sys_clone+0x14/0x38 <-ret_fast_syscall+0x0/0x28
            cron-353   [000] ....  3417.391279: <stack trace>
 => sys_clone+0x18/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7e981c80
            cron-353   [000] ....  3417.391819: sched_process_fork: comm=cron pid=353 child_comm=cron child_pid=1229
    kworker/u8:3-1209  [000] ....  3417.403500: sched_process_fork: comm=kworker/u8:3 pid=1209 child_comm=kworker/u8:3 child_pid=1230
        modprobe-1230  [002] ....  3417.403913: sched_process_exec: filename=/sbin/modprobe pid=1230 old_pid=1230
        modprobe-1230  [002] ....  3417.415496: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
        modprobe-1230  [002] ....  3417.415530: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7e88fd38
        modprobe-1230  [002] ....  3417.416090: sched_process_exit: comm=modprobe pid=1230 prio=120
    kworker/u8:3-1209  [000] ....  3417.416844: sched_process_fork: comm=kworker/u8:3 pid=1209 child_comm=kworker/u8:3 child_pid=1231
        modprobe-1231  [003] ....  3417.417239: sched_process_exec: filename=/sbin/modprobe pid=1231 old_pid=1231
        modprobe-1231  [003] ....  3417.428861: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
        modprobe-1231  [003] ....  3417.428894: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ec31d38
        modprobe-1231  [003] ....  3417.429452: sched_process_exit: comm=modprobe pid=1231 prio=120
    kworker/u8:3-1209  [000] ....  3417.431962: sched_process_fork: comm=kworker/u8:3 pid=1209 child_comm=kworker/u8:3 child_pid=1232
        modprobe-1232  [000] ....  3417.432390: sched_process_exec: filename=/sbin/modprobe pid=1232 old_pid=1232
        modprobe-1232  [000] ....  3417.444242: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
        modprobe-1232  [000] ....  3417.444276: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ee5ed38
        modprobe-1232  [000] ....  3417.444905: sched_process_exit: comm=modprobe pid=1232 prio=120
            cron-1229  [001] ....  3417.445155: sys_clone+0x14/0x38 <-ret_fast_syscall+0x0/0x28
            cron-1229  [001] ....  3417.445174: <stack trace>
 => sys_clone+0x18/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7e9803b0
            cron-1229  [001] ....  3417.446066: sched_process_fork: comm=cron pid=1229 child_comm=cron child_pid=1233
              sh-1233  [002] ....  3417.449661: sched_process_exec: filename=/bin/sh pid=1233 old_pid=1233
              sh-1233  [002] ....  3417.452249: sys_clone+0x14/0x38 <-ret_fast_syscall+0x0/0x28
              sh-1233  [002] ....  3417.452278: <stack trace>
 => sys_clone+0x18/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7ed17a68
              sh-1233  [002] ....  3417.452575: sched_process_fork: comm=sh pid=1233 child_comm=sh child_pid=1234
       run-parts-1234  [000] ....  3417.453551: sched_process_exec: filename=/bin/run-parts pid=1234 old_pid=1234
       run-parts-1234  [000] ....  3417.457234: sys_clone+0x14/0x38 <-ret_fast_syscall+0x0/0x28
       run-parts-1234  [000] ....  3417.457263: <stack trace>
 => sys_clone+0x18/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7eba7a98
       run-parts-1234  [000] ....  3417.457562: sched_process_fork: comm=run-parts pid=1234 child_comm=run-parts child_pid=1235
    fake-hwclock-1235  [003] ....  3417.458980: search_binary_handler+0x10/0x30 <-load_script+0x24c/0x2fc
    fake-hwclock-1235  [003] ....  3417.459013: <stack trace>
 => search_binary_handler+0x14/0x30
 => load_script+0x24c/0x2fc
 => search_binary_handler.part.2+0xac/0x24c
 => __do_execve_file+0x52c/0x7d0
 => sys_execve+0x44/0x4c
 => ret_fast_syscall+0x0/0x28
 => 0x7eba7ab4
    fake-hwclock-1235  [003] ....  3417.459509: sched_process_exec: filename=/etc/cron.hourly/fake-hwclock pid=1235 old_pid=1235
    fake-hwclock-1235  [003] ....  3417.462125: sys_clone+0x14/0x38 <-ret_fast_syscall+0x0/0x28
    fake-hwclock-1235  [003] ....  3417.462153: <stack trace>
 => sys_clone+0x18/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7ed1ba80
    fake-hwclock-1235  [003] ....  3417.462443: sched_process_fork: comm=fake-hwclock pid=1235 child_comm=fake-hwclock child_pid=1236
    fake-hwclock-1236  [001] ....  3417.463146: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
    fake-hwclock-1236  [001] ....  3417.463169: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ed1b9a8
    fake-hwclock-1236  [001] ....  3417.463398: sched_process_exit: comm=fake-hwclock pid=1236 prio=120
    fake-hwclock-1235  [003] ....  3417.463602: sys_clone+0x14/0x38 <-ret_fast_syscall+0x0/0x28
    fake-hwclock-1235  [003] ....  3417.463617: <stack trace>
 => sys_clone+0x18/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7ed1ba38
    fake-hwclock-1235  [003] ....  3417.463860: sched_process_fork: comm=fake-hwclock pid=1235 child_comm=fake-hwclock child_pid=1237
    fake-hwclock-1237  [002] ....  3417.464344: search_binary_handler+0x10/0x30 <-load_script+0x24c/0x2fc
    fake-hwclock-1237  [002] ....  3417.464367: <stack trace>
 => search_binary_handler+0x14/0x30
 => load_script+0x24c/0x2fc
 => search_binary_handler.part.2+0xac/0x24c
 => __do_execve_file+0x52c/0x7d0
 => sys_execve+0x44/0x4c
 => ret_fast_syscall+0x0/0x28
 => 0x7ed1b9ac
    fake-hwclock-1237  [002] ....  3417.464809: sched_process_exec: filename=/sbin/fake-hwclock pid=1237 old_pid=1237
    fake-hwclock-1237  [002] ....  3417.468009: sys_clone+0x14/0x38 <-ret_fast_syscall+0x0/0x28
    fake-hwclock-1237  [002] ....  3417.468034: <stack trace>
 => sys_clone+0x18/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7ea4b8c8
    fake-hwclock-1237  [002] ....  3417.468293: sched_process_fork: comm=fake-hwclock pid=1237 child_comm=fake-hwclock child_pid=1238
            date-1238  [003] ....  3417.469542: sched_process_exec: filename=/bin/date pid=1238 old_pid=1238
            date-1238  [003] ....  3417.472525: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
            date-1238  [003] ....  3417.472557: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ed6dcf8
            date-1238  [003] ....  3417.472984: sched_process_exit: comm=date pid=1238 prio=120
    fake-hwclock-1237  [002] ....  3417.474377: sys_clone+0x14/0x38 <-ret_fast_syscall+0x0/0x28
    fake-hwclock-1237  [002] ....  3417.474403: <stack trace>
 => sys_clone+0x18/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7ea4b9e8
    fake-hwclock-1237  [002] ....  3417.474673: sched_process_fork: comm=fake-hwclock pid=1237 child_comm=fake-hwclock child_pid=1239
            date-1239  [001] ....  3417.475606: sched_process_exec: filename=/bin/date pid=1239 old_pid=1239
            date-1239  [001] ....  3417.478607: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
            date-1239  [001] ....  3417.478641: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7eedfce8
            date-1239  [001] ....  3417.479059: sched_process_exit: comm=date pid=1239 prio=120
    fake-hwclock-1237  [002] ....  3417.479835: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
    fake-hwclock-1237  [002] ....  3417.479859: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ea4b9b8
          <idle>-0     [000] ..s.  3417.480126: sched_process_free: comm=modprobe pid=1230 prio=120
          <idle>-0     [000] ..s.  3417.480151: sched_process_free: comm=modprobe pid=1231 prio=120
    fake-hwclock-1237  [002] ....  3417.480263: sched_process_exit: comm=fake-hwclock pid=1237 prio=120
    fake-hwclock-1235  [003] ....  3417.480453: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
    fake-hwclock-1235  [003] ....  3417.480471: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ed1b9a8
    fake-hwclock-1235  [003] ....  3417.480758: sched_process_exit: comm=fake-hwclock pid=1235 prio=120
       run-parts-1234  [000] ....  3417.481041: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
       run-parts-1234  [000] ....  3417.481057: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7eba8cd8
       run-parts-1234  [000] ....  3417.481347: sched_process_exit: comm=run-parts pid=1234 prio=120
              sh-1233  [002] ....  3417.481497: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
              sh-1233  [002] ....  3417.481512: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ed179c8
              sh-1233  [002] ....  3417.481800: sched_process_exit: comm=sh pid=1233 prio=120
    kworker/u8:3-1209  [000] ....  3417.482665: sched_process_fork: comm=kworker/u8:3 pid=1209 child_comm=kworker/u8:3 child_pid=1240
        modprobe-1240  [000] ....  3417.483116: sched_process_exec: filename=/sbin/modprobe pid=1240 old_pid=1240
        modprobe-1240  [000] ....  3417.495059: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
        modprobe-1240  [000] ....  3417.495092: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ed28d38
        modprobe-1240  [000] ....  3417.495673: sched_process_exit: comm=modprobe pid=1240 prio=120
    kworker/u8:3-1209  [000] ....  3417.496594: sched_process_fork: comm=kworker/u8:3 pid=1209 child_comm=kworker/u8:3 child_pid=1241
        modprobe-1241  [000] ....  3417.497048: sched_process_exec: filename=/sbin/modprobe pid=1241 old_pid=1241
        modprobe-1241  [000] ....  3417.508798: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
        modprobe-1241  [000] ....  3417.508832: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ea60d38
        modprobe-1241  [000] ....  3417.509405: sched_process_exit: comm=modprobe pid=1241 prio=120
    kworker/u8:3-1209  [000] ....  3417.509803: sched_process_fork: comm=kworker/u8:3 pid=1209 child_comm=kworker/u8:3 child_pid=1242
          <idle>-0     [003] ..s.  3417.510136: sched_process_free: comm=fake-hwclock pid=1236 prio=120
          <idle>-0     [000] ..s.  3417.510151: sched_process_free: comm=modprobe pid=1232 prio=120
        modprobe-1242  [001] ....  3417.510256: sched_process_exec: filename=/sbin/modprobe pid=1242 old_pid=1242
        modprobe-1242  [001] ....  3417.522049: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
        modprobe-1242  [001] ....  3417.522084: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ed29d38
        modprobe-1242  [001] ....  3417.522654: sched_process_exit: comm=modprobe pid=1242 prio=120
            cron-1229  [001] ....  3417.523874: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
            cron-1229  [001] ....  3417.523898: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7e981c98
            cron-1229  [001] ....  3417.524629: sched_process_exit: comm=cron pid=1229 prio=120
          <idle>-0     [002] ..s.  3417.540096: sched_process_free: comm=date pid=1238 prio=120
          <idle>-0     [003] ..s.  3417.540102: sched_process_free: comm=fake-hwclock pid=1237 prio=120
          <idle>-0     [001] ..s.  3417.540112: sched_process_free: comm=sh pid=1233 prio=120
          <idle>-0     [002] ..s.  3417.540119: sched_process_free: comm=date pid=1239 prio=120
          <idle>-0     [002] ..s.  3417.540145: sched_process_free: comm=run-parts pid=1234 prio=120
          <idle>-0     [000] ..s.  3417.570089: sched_process_free: comm=fake-hwclock pid=1235 prio=120
          <idle>-0     [000] ..s.  3417.570150: sched_process_free: comm=modprobe pid=1240 prio=120
          <idle>-0     [000] ..s.  3417.570189: sched_process_free: comm=modprobe pid=1241 prio=120
          <idle>-0     [000] ..s.  3417.590087: sched_process_free: comm=modprobe pid=1242 prio=120
          <idle>-0     [000] ..s.  3417.590111: sched_process_free: comm=cron pid=1229 prio=120
            bash-1048  [000] ....  3424.311768: sys_clone+0x14/0x38 <-ret_fast_syscall+0x0/0x28
            bash-1048  [000] ....  3424.311801: <stack trace>
 => sys_clone+0x18/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7efe12b0
            bash-1048  [000] ....  3424.312230: sched_process_fork: comm=bash pid=1048 child_comm=bash child_pid=1243
              vi-1243  [001] ....  3424.314564: sched_process_exec: filename=/usr/bin/vi pid=1243 old_pid=1243
              vi-1243  [001] ....  3432.867468: do_exit+0x14/0xbe8 <-do_group_exit+0x50/0xe8
              vi-1243  [001] ....  3432.867503: <stack trace>
 => do_exit+0x18/0xbe8
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7e86ce38
              vi-1243  [001] ....  3432.869747: sched_process_exit: comm=vi pid=1243 prio=120
          <idle>-0     [000] ..s.  3432.900208: sched_process_free: comm=vi pid=1243 prio=120
            bash-1048  [000] ....  3435.096290: sys_clone+0x14/0x38 <-ret_fast_syscall+0x0/0x28
            bash-1048  [000] ....  3435.096323: <stack trace>
 => sys_clone+0x18/0x38
 => ret_fast_syscall+0x0/0x28
 => 0x7efe12b0
            bash-1048  [000] ....  3435.096746: sched_process_fork: comm=bash pid=1048 child_comm=bash child_pid=1244
           <...>-1244  [001] ....  3435.098237: search_binary_handler+0x10/0x30 <-load_script+0x24c/0x2fc
           <...>-1244  [001] ....  3435.098274: <stack trace>
 => search_binary_handler+0x14/0x30
 => load_script+0x24c/0x2fc
 => search_binary_handler.part.2+0xac/0x24c
 => __do_execve_file+0x52c/0x7d0
 => sys_execve+0x44/0x4c
 => ret_fast_syscall+0x0/0x28
 => 0x7efe1354
           <...>-1244  [001] ....  3435.099120: sched_process_exec: filename=./get_ftrace.sh pid=1244 old_pid=1244
