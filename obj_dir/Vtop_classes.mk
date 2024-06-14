# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
<<<<<<< HEAD
	Vtop_mandelbrot_engine \
=======
	Vtop___024root__DepSet_h84412442__0 \
	Vtop___024root__DepSet_heccd7ead__0 \
	Vtop_mandelbrot_engine__DepSet_h51e9ebf0__0 \
	Vtop_queue_new__DepSet_h2d75d6ae__0 \
	Vtop_queue_new__DepSet_h85b8ac51__0 \
>>>>>>> f286281ae43e88f0425f2bbc458afd01a3d0bcba

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop__Slow \
	Vtop_mandelbrot_engine__Slow \
<<<<<<< HEAD
=======
	Vtop_mandelbrot_engine__DepSet_h51e9ebf0__0__Slow \
	Vtop_mandelbrot_engine__DepSet_h9924b71b__0__Slow \
	Vtop_queue_new__Slow \
	Vtop_queue_new__DepSet_h2d75d6ae__0__Slow \
	Vtop_queue_new__DepSet_h85b8ac51__0__Slow \
>>>>>>> f286281ae43e88f0425f2bbc458afd01a3d0bcba

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Trace \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \
	Vtop__Trace__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
