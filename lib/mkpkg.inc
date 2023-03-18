# Global MKPKG definitions for the package.

$set XFLAGS	= "$(XFLAGS) -p optic"
$set XVFLAGS	= "$(XVFLAGS) -p optic"
$set LFLAGS	= "$(LFLAGS) -p optic"

#$ifeq (MACH, sparc) then
#    $include "optic$lib/mkpkg.sf.SUN4"
#$else $ifeq (MACH, i386) then
#    $include "optic$lib/mkpkg.sf.I386"
#$else $ifeq (MACH, f68881) then
#    $include "optic$lib/mkpkg.sf.SUN3"
#$else $ifeq (MACH, ffpa) then
#    $include "optic$lib/mkpkg.sf.SUN3"
#$else $ifeq (MACH, vms) then
#    $include "optic$lib/mkpkg.sf.VMS"
#$else $ifeq (MACH, ddec) then
#    $include "optic$lib/mkpkg.sf.DDEC"
#$else $ifeq (MACH, dmip) then
#    $include "optic$lib/mkpkg.sf.DMIP"
#$else $ifeq (MACH, rs6000) then
#    $include "optic$lib/mkpkg.sf.AIX3"
#$else $ifeq (MACH, mips) then
#    $include "optic$lib/mkpkg.sf.MIPS"
#$end
