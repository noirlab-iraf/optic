#{ OPTIC.CL -- Script to set up tasks in the OPTIC package

# Dependent packages.
mscred

package	optic

# Directories.

set	opticdb = "optic$lib/opticdb/"

# CL scripts with parameters:

task	optichdr = "optic$src/optichdr.cl"
task	opticsetinst = "optic$src/opticsetinst.cl"
#task	rmhierarch = "optic$src/rmhierarch.cl"
task	optichdrfix = "optic$src/optichdrfix.cl"

#hidetask rmhierarch
hidetask optichdrfix

clbye()
