#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5634976f, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7c90ae01, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xd2a26fb, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x6b214e3f, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbceaaf05, __VMLINUX_SYMBOL_STR(brcmu_d11_attach) },
	{ 0x3b249bf6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x1102aa41, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x93b9b425, __VMLINUX_SYMBOL_STR(cfg80211_connect_done) },
	{ 0xb82f6d70, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x665afabc, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x1ad614be, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc3fc98ae, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xca80ac2a, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xea124bd1, __VMLINUX_SYMBOL_STR(gcd) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x9c85e8be, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_data) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0xd261b8a6, __VMLINUX_SYMBOL_STR(brcmu_boardrev_str) },
	{ 0x660b48ae, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x19e03378, __VMLINUX_SYMBOL_STR(cfg80211_get_p2p_attr) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xb5a57d8a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x25a4e4a4, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xc7e0496b, __VMLINUX_SYMBOL_STR(cfg80211_report_wowlan_wakeup) },
	{ 0x22370a15, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x9f91f33b, __VMLINUX_SYMBOL_STR(brcmu_pkt_buf_get_skb) },
	{ 0x2cdfba75, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x4e6d24c3, __VMLINUX_SYMBOL_STR(get_random_u32) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x86e466c2, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x48c53cb, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x535d9460, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0x2f48b6cf, __VMLINUX_SYMBOL_STR(seq_write) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xd7195370, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xe8663ae6, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x4c2ae700, __VMLINUX_SYMBOL_STR(strnstr) },
	{ 0x9d5a46c6, __VMLINUX_SYMBOL_STR(driver_for_each_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2aac6fcd, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdd5f8a49, __VMLINUX_SYMBOL_STR(brcmu_pktq_pdeq_tail) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc7dcb187, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x604761cc, __VMLINUX_SYMBOL_STR(__platform_driver_probe) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xc315aa06, __VMLINUX_SYMBOL_STR(pm_runtime_allow) },
	{ 0xc43efdb9, __VMLINUX_SYMBOL_STR(brcmu_pktq_penq) },
	{ 0x544a9572, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0x497d0f7a, __VMLINUX_SYMBOL_STR(brcmu_pktq_mdeq) },
	{ 0xcd15445, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x82bd8215, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xea7a59b6, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfe61e7a2, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0xef10b190, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x21177d8b, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x2abb914e, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xa7640593, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xdfdd1c20, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xe28fa2e9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xaad8c7d6, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x91d39fe7, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0xaf1fcb0d, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x834d8566, __VMLINUX_SYMBOL_STR(sdio_writel) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfc982daa, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xb27d9511, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0x164a2c9, __VMLINUX_SYMBOL_STR(brcmu_pktq_pdeq_match) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9dc3ed3, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xc83d829f, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xf7a4dd1c, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc28111ff, __VMLINUX_SYMBOL_STR(dev_coredumpv) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa82301e8, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x190f764f, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xff6b1311, __VMLINUX_SYMBOL_STR(wiphy_read_of_freq_limits) },
	{ 0x37f3ab32, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x40100300, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x9d493f0a, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x47dd9bcd, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x9df6e501, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x18650c66, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xee04e335, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x74a5392c, __VMLINUX_SYMBOL_STR(sdio_readl) },
	{ 0x5f62b305, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x2a18c80, __VMLINUX_SYMBOL_STR(ieee80211_get_channel) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x95b5ef8c, __VMLINUX_SYMBOL_STR(brcmu_pktq_peek_tail) },
	{ 0xa9b4b59e, __VMLINUX_SYMBOL_STR(brcmu_pktq_flush) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa1b3d941, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xe38b822b, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0xc333c89, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x4c161a33, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x4fb41661, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x62451f4, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb6c6d42d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x886cd773, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x8e61b7f6, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x619cdc71, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xc8d67c1f, __VMLINUX_SYMBOL_STR(brcmu_dbg_hex_dump) },
	{ 0xf13d7315, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xda197cc8, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xcdd158d, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x3b86f721, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x8c03617b, __VMLINUX_SYMBOL_STR(cfg80211_check_combinations) },
	{ 0x8a7156f2, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x89418bfd, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xe4e00afa, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0xd7f33f5c, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0xb68873ca, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x64b593b4, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0x91e3500f, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xec899e2f, __VMLINUX_SYMBOL_STR(cfg80211_crit_proto_stopped) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x5a0ea340, __VMLINUX_SYMBOL_STR(debugfs_create_devm_seqfile) },
	{ 0xb3caf0d5, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xf0d9e680, __VMLINUX_SYMBOL_STR(cfg80211_classify8021d) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x2e77fe9f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7ae284e5, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x226a6ec6, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x259b700f, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xb9b295c3, __VMLINUX_SYMBOL_STR(request_firmware_direct) },
	{ 0x18cdcc1b, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xa1a72844, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0xea67a350, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x297ccf70, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xadc1b3e3, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xc3b4ac1b, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x3f2988a1, __VMLINUX_SYMBOL_STR(brcmu_dotrev_str) },
	{ 0x1ccf3796, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd66a756a, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x3f03f138, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x40968978, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xad51d259, __VMLINUX_SYMBOL_STR(sdio_writew) },
	{ 0xd565e80b, __VMLINUX_SYMBOL_STR(brcmu_pktq_penq_head) },
	{ 0x9128f0ac, __VMLINUX_SYMBOL_STR(brcmu_pktq_init) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x440ffa83, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xdd31568b, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x60d39962, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1fc7a453, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x54786d00, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x689e06e, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xdda8d2d1, __VMLINUX_SYMBOL_STR(sdio_readw) },
	{ 0xa4897e34, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xae726983, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x927d4cb1, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xb6d95806, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped) },
	{ 0x3c7504c1, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xff0698cd, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x7e531f45, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0xfb008bb, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x53fdbde2, __VMLINUX_SYMBOL_STR(brcmu_pkt_buf_free_skb) },
	{ 0x8e31e8de, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x29dec96f, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x4a37f28b, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x48272d28, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xbb35445e, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x73ed5f7f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x98d63032, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x3fb19cb0, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xc1514a3b, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x5a520c88, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x95d3c3c5, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
	{ 0xe14850d8, __VMLINUX_SYMBOL_STR(brcmu_pktq_mlen) },
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
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "000C20B95A12A42DD3F65C7");
