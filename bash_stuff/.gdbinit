define no_sig
	handle SIGUSR1 nostop noprint
end

define sa
	set args
end

no_sig
set startup-with-shell off

python
import sys 
sys.path.insert(0, '<path_to_libcxx-pp_src_dir>') 
from libcxx.v1.printers import register_libcxx_printers 
register_libcxx_printers (None) 
end
