cmd_/home/chris/bac_a_sable/kprout/modules.order := {   echo /home/chris/bac_a_sable/kprout/kprout.ko; :; } | awk '!x[$$0]++' - > /home/chris/bac_a_sable/kprout/modules.order
