#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbca7617b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd7ee04a8, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x941a3b7f, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x55a5f311, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbceaaf05, __VMLINUX_SYMBOL_STR(brcmu_d11_attach) },
	{ 0xdb2e6e9e, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x1acaa0e0, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xccb3848b, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x748269e3, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x45306735, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x14fa83f4, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x2edf3903, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_data) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x3db0fc96, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x19e03378, __VMLINUX_SYMBOL_STR(cfg80211_get_p2p_attr) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x95becbb8, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x1053d1ba, __VMLINUX_SYMBOL_STR(cfg80211_report_wowlan_wakeup) },
	{ 0x8de1a7e5, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x8371e1dc, __VMLINUX_SYMBOL_STR(brcmu_pkt_buf_get_skb) },
	{ 0x583574c7, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x8731782a, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x483ab7d1, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb52097e6, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xe8663ae6, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x4c2ae700, __VMLINUX_SYMBOL_STR(strnstr) },
	{ 0xf906dce0, __VMLINUX_SYMBOL_STR(driver_for_each_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbee88bbd, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7cada489, __VMLINUX_SYMBOL_STR(brcmu_pktq_pdeq_tail) },
	{ 0xe4a48145, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xdd300e78, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x39e80fa5, __VMLINUX_SYMBOL_STR(__platform_driver_probe) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x44cf1a69, __VMLINUX_SYMBOL_STR(pm_runtime_allow) },
	{ 0xd729b7ec, __VMLINUX_SYMBOL_STR(brcmu_pktq_penq) },
	{ 0x620ea328, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0xf399f005, __VMLINUX_SYMBOL_STR(brcmu_pktq_mdeq) },
	{ 0xd6f09555, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdfd31201, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8a7f3530, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0x1a8bca44, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x5774e9bd, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0xb848be95, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x59a534cf, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x9d193e34, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xf766ab31, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x83bee50a, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfe06e1b6, __VMLINUX_SYMBOL_STR(sdio_writel) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x51fe3d9d, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0x4c227e6f, __VMLINUX_SYMBOL_STR(brcmu_pktq_pdeq_match) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x11821eef, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x3b6e8b5e, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x12e2c352, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x33a16973, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x6a338294, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x11d797dd, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xdce92820, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x9f3500fd, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb09feaf9, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x29c020c5, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xd9ffc467, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x42ab14e6, __VMLINUX_SYMBOL_STR(sdio_readl) },
	{ 0x5379e28d, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x829994ff, __VMLINUX_SYMBOL_STR(brcmu_pktq_peek_tail) },
	{ 0x153b52ef, __VMLINUX_SYMBOL_STR(brcmu_pktq_flush) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3be7e806, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd0ef25d2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb9b6a5ca, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x1665f122, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x5d40e9b4, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xbb81e8cd, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x4dd48fd0, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xd6afe52a, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x5e4bb08f, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x31ff2455, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf09de776, __VMLINUX_SYMBOL_STR(get_random_int) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xb5845ade, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x4766f731, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xcdd158d, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x6f7e2b26, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x16c50f8c, __VMLINUX_SYMBOL_STR(cfg80211_check_combinations) },
	{ 0xcd8ce386, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x39aa72a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xa563596c, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0xf867718a, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0xbfdc509d, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe5a1541c, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0x58226220, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xf4d5691a, __VMLINUX_SYMBOL_STR(cfg80211_crit_proto_stopped) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xe7aef4d2, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xa0164050, __VMLINUX_SYMBOL_STR(cfg80211_classify8021d) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xd61f5378, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbf82c696, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0xfd40e5fe, __VMLINUX_SYMBOL_STR(cfg80211_connect_bss) },
	{ 0x7c4f953, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0xb413c056, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x7f2fcee3, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x9ed347e9, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x90967957, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x94365b9e, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x4ee90d8f, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xd9e7e757, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x3f2988a1, __VMLINUX_SYMBOL_STR(brcmu_dotrev_str) },
	{ 0xec3a9034, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x93eb5731, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x956d3b77, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x905ac1f4, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x36e97e97, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x6ee61eda, __VMLINUX_SYMBOL_STR(sdio_writew) },
	{ 0xa9b9e48e, __VMLINUX_SYMBOL_STR(brcmu_pktq_penq_head) },
	{ 0x791a288, __VMLINUX_SYMBOL_STR(brcmu_pktq_init) },
	{ 0x731fea20, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x2ce49fe2, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xebee248c, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x4fb822de, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x347b7665, __VMLINUX_SYMBOL_STR(sdio_readw) },
	{ 0x29f9172a, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xf89fc2f7, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85a7f98a, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x2f4901b, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped) },
	{ 0x5ab50888, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xb53e31dc, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x6682bfcd, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0xb5f2151d, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xa1c58e3f, __VMLINUX_SYMBOL_STR(brcmu_pkt_buf_free_skb) },
	{ 0x76903862, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xcbe1909e, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x65fde753, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf3637041, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x2321f7fd, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xa8512ce3, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xd87357da, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x686c24f1, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x104e2f17, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
	{ 0xd10bf7dc, __VMLINUX_SYMBOL_STR(brcmu_pktq_mlen) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=brcmutil,cfg80211";

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "51FE1DBAC0EDF66FC3B6294");
