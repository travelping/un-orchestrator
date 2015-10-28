#ifndef LIBVIRT_CONSTANTS_H_
#define LIBVIRT_CONSTANTS_H_ 1

/* TODO - These should come from an orchestrator config file (curently, there is only one for the UN ports) */
static const char* QEMU_BIN_PATH = NULL; /* Can point to qemu bin or a wrapper script that tweaks the command line. If NULL, Libvirt default or path found in XML is used */

#ifdef ENABLE_KVM_DPDK_USVHOST
	static const char* OVS_BASE_SOCK_PATH = "/usr/local/var/run/openvswitch/";
#endif

#endif //LIBVIRT_CONSTANTS_H_
