#ifndef __INC_FIRMWARE8723B_H__
#define __INC_FIRMWARE8723B_H__


#define IS_FW_HEADER_EXIST_8723B(_pFwHdr)	((GET_FIRMWARE_HDR_SIGNATURE(_pFwHdr) &0xFFF0) ==  0x5300)

//--------------------------------------------
//3				Host Message Box 
//--------------------------------------------

// Keep Alive Control
#define SET_8723B_H2CCMD_KEEP_ALIVE_ENABLE(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 1, __Value)
#define SET_8723B_H2CCMD_KEEP_ALIVE_ACCPEPT_USER_DEFINED(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE(__pH2CCmd, 1, 1, __Value)
#define SET_8723B_H2CCMD_KEEP_ALIVE_PERIOD(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)

//_RSVDPAGE_LOC_CMD0
#define SaaasET_8723B_H2CCMD_RSVDPAGE_LOC_PROBE_RSP(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 8, __Value)
#define SET_8723B_H2CCMD_RSVDPAGE_LOC_PSPOLL(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)
#define SET_8723B_H2CCMD_RSVDPAGE_LOC_NULL_DATA(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd)+2, 0, 8, __Value)
#define SET_8723B_H2CCMD_RSVDPAGE_LOC_QOS_NULL_DATA(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd)+3, 0, 8, __Value)
#define SET_8723B_H2CCMD_RSVDPAGE_LOC_BT_QOS_NULL_DATA(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd)+4, 0, 8, __Value)
#define SET_8723B_H2CCMD_RSVDPAGE_LOC_BT_CTS(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd)+5, 0, 8, __Value)


//_MEDIA_STATUS_RPT_PARM_CMD1
#define SET_8723B_H2CCMD_MSRRPT_PARM_OPMODE(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 1, __Value)
#define SET_8723B_H2CCMD_MSRRPT_PARM_MACID_IND(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 1, 1, __Value)
#define SET_8723B_H2CCMD_MSRRPT_PARM_MACID(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE(__pH2CCmd+1, 0, 8, __Value)
#define SET_8723B_H2CCMD_MSRRPT_PARM_MACID_END(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE(__pH2CCmd+2, 0, 8, __Value)


// _WoWLAN PARAM_CMD5
#define SET_8723B_H2CCMD_WOWLAN_FUNC_ENABLE(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 1, __Value)
#define SET_8723B_H2CCMD_WOWLAN_PATTERN_MATCH_ENABLE(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 1, 1, __Value)
#define SET_8723B_H2CCMD_WOWLAN_MAGIC_PKT_ENABLE(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 2, 1, __Value)
#define SET_8723B_H2CCMD_WOWLAN_UNICAST_PKT_ENABLE(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 3, 1, __Value)
#define SET_8723B_H2CCMD_WOWLAN_ALL_PKT_DROP(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 4, 1, __Value)
#define SET_8723B_H2CCMD_WOWLAN_GPIO_ACTIVE(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE(__pH2CCmd, 5, 1, __Value)
#define SET_8723B_H2CCMD_WOWLAN_REKEY_WAKE_UP(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 6, 1, __Value)
#define SET_8723B_H2CCMD_WOWLAN_DISCONNECT_WAKE_UP(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 7, 1, __Value)
#define SET_8723B_H2CCMD_WOWLAN_GPIONUM(__pH2CCmd, __Value)					SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)
#define SET_8723B_H2CCMD_WOWLAN_GPIO_DURATION(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd)+2, 0, 8, __Value)
#define SET_8723B_H2CCMD_WOWLAN_GPIO_PULSE_EN(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd)+3, 0, 8, __Value)
#define SET_8723B_H2CCMD_WOWLAN_GPIO_PULSE_CNT(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd)+3, 1, 8, __Value)


//WLANINFO_PARM
#define SET_8723B_H2CCMD_WLANINFO_PARM_OPMODE(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 8, __Value)
#define SET_8723B_H2CCMD_WLANINFO_PARM_CHANNEL(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)
#define SET_8723B_H2CCMD_WLANINFO_PARM_BW40MHZ(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd)+2, 0, 8, __Value)

// _REMOTE_WAKEUP_CMD7
#define SET_8723B_H2CCMD_REMOTE_WAKECTRL_ENABLE(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 1, __Value)
#define SET_8723B_H2CCMD_REMOTE_WAKE_CTRL_ARP_OFFLOAD_EN(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE(__pH2CCmd, 1, 1, __Value)
#define SET_8723B_H2CCMD_REMOTE_WAKE_CTRL_NDP_OFFLOAD_EN(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE(__pH2CCmd, 2, 1, __Value)
#define SET_8723B_H2CCMD_REMOTE_WAKE_CTRL_GTK_OFFLOAD_EN(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE(__pH2CCmd, 3, 1, __Value)
#define SET_8723B_H2CCMD_REMOTE_WAKE_CTRL_NETWORK_LIST_OFFLOAD_EN(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 4, 1, __Value)
#define SET_8723B_H2CCMD_REMOTE_WAKE_CTRL_REALWOWV2_EN(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE(__pH2CCmd, 6, 1, __Value)


// _AP_OFFLOAD_CMD8
#define SET_8723B_H2CCMD_AP_OFFLOAD_ON(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 8, __Value)
#define SET_8723B_H2CCMD_AP_OFFLOAD_HIDDEN(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)
#define SET_8723B_H2CCMD_AP_OFFLOAD_DENYANY(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd)+2, 0, 8, __Value)
#define SET_8723B_H2CCMD_AP_OFFLOAD_WAKEUP_EVT_RPT(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+3, 0, 8, __Value)

// FCS_LOC_CMD10
#define SET_8723B_H2CCMD_RSVDPAGE_FCS_LOC_NULL_DATA0(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 8, __Value)
#define SET_8723B_H2CCMD_RSVDPAGE_FCS_LOC_NULL_DATA1(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)
#define SET_8723B_H2CCMD_RSVDPAGE_FCS_LOC_NULL_DATA2(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+2, 0, 8, __Value)

// FCS_INFO_CMD11
#define SET_8723B_H2CCMD_FCS_INFO_ORDER(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 4, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_TOTAL(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE(__pH2CCmd, 4, 4, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_CHIDX(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE((__pH2CCmd+1), 0, 8, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_BW(__pH2CCmd, __Value)					SET_BITS_TO_LE_1BYTE((__pH2CCmd+2), 0, 2, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_BWSC_40(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd+2), 2, 3, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_BWSC_80(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd+2), 5, 3, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_DURATION(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd+3), 0, 8, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_MACID0(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE((__pH2CCmd+4), 0, 8, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_MACID1(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE((__pH2CCmd+5), 0, 8, __Value)

// FCS_MACID_BITMAP16
#define SET_8723B_H2CCMD_FCS_MACID_BITMAP0(__pH2CCmd, __Value)				SET_BITS_TO_LE_2BYTE(__pH2CCmd, 0, 16, __Value)
#define SET_8723B_H2CCMD_FCS_MACID_BITMAP1(__pH2CCmd, __Value)				SET_BITS_TO_LE_2BYTE((__pH2CCmd)+2, 0, 16, __Value)
#define SET_8723B_H2CCMD_FCS_MACID_BITMAP2(__pH2CCmd, __Value)				SET_BITS_TO_LE_2BYTE((__pH2CCmd)+4, 0, 16, __Value)

// FCS_LOC_CMD17 (v2)
#define SET_8723B_H2CCMD_RSVDPAGE_FCS_LOC_V2_NULL_DATA0(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 8, __Value)
#define SET_8723B_H2CCMD_RSVDPAGE_FCS_LOC_V2_NULL_DATA1(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)
#define SET_8723B_H2CCMD_RSVDPAGE_FCS_LOC_V2_NULL_DATA2(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+2, 0, 8, __Value)

// FCS_INFO_CMD18 (v2)
#define SET_8723B_H2CCMD_FCS_INFO_V2_ORDER(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 4, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_V2_TOTAL(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE(__pH2CCmd, 4, 4, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_V2_CHIDX(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE((__pH2CCmd+1), 0, 8, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_V2_BW(__pH2CCmd, __Value)					SET_BITS_TO_LE_1BYTE((__pH2CCmd+2), 0, 2, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_V2_BWSC_40(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd+2), 2, 3, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_V2_BWSC_80(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd+2), 5, 3, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_V2_DURATION(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd+3), 0, 8, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_V2_ROLE(__pH2CCmd, __Value)					SET_BITS_TO_LE_1BYTE((__pH2CCmd+4), 0, 3, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_V2_IN_CUR_CH(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd+4), 3, 1, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_V2_DISTXNULL(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE((__pH2CCmd+6), 4, 1, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_V2_C2HRPT(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE((__pH2CCmd+6), 5, 2, __Value)
#define SET_8723B_H2CCMD_FCS_INFO_V2_ChNLSCAN(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE((__pH2CCmd+6), 7, 1, __Value)

// _PWR_MOD_CMD20
#define SET_8723B_H2CCMD_PWRMODE_PARM_MODE(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 8, __Value)
#define SET_8723B_H2CCMD_PWRMODE_PARM_RLBM(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 4, __Value)
#define SET_8723B_H2CCMD_PWRMODE_PARM_SMART_PS(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 4, 4, __Value)
#define SET_8723B_H2CCMD_PWRMODE_PARM_BCN_PASS_TIME(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+2, 0, 8, __Value)
#define SET_8723B_H2CCMD_PWRMODE_PARM_ALL_QUEUE_UAPSD(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+3, 0, 8, __Value)
#define SET_8723B_H2CCMD_PWRMODE_PARM_PWR_STATE(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+4, 0, 8, __Value)
#define SET_8723B_H2CCMD_PWRMODE_PARM_TWO_ANTENNA_EN(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+5, 0, 8, __Value)

#define GET_8723B_H2CCMD_PWRMODE_PARM_MODE(__pH2CCmd)					LE_BITS_TO_1BYTE(__pH2CCmd, 0, 8)

// AOAC_GLOBAL_INFO
#define SET_8723B_H2CCMD_AOAC_GLOBAL_INFO_PAIRWISE_ENC_ALG(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 8, __Value)
#define SET_8723B_H2CCMD_AOAC_GLOBAL_INFO_GROUP_ENC_ALG(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)

// AOAC_RSVDPAGE_LOC
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_REMOTE_WAKE_CTRL_INFO(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd), 0, 8, __Value)
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_ARP_RSP(__pH2CCmd, __Value)					SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_NS(__pH2CCmd, __Value)								SET_BITS_TO_LE_1BYTE((__pH2CCmd)+2, 0, 8, __Value)
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_GTK_RSP(__pH2CCmd, __Value)					SET_BITS_TO_LE_1BYTE((__pH2CCmd)+3, 0, 8, __Value)
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_GTK_INFO(__pH2CCmd, __Value)					SET_BITS_TO_LE_1BYTE((__pH2CCmd)+4, 0, 8, __Value)
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_GTK_EXT_MEM(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE((__pH2CCmd)+5, 0, 8, __Value)
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_PROT_OFFLOAD_INFO(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd)+6, 0, 8, __Value)

// AOAC_RSVDPAGE_LOC  For Real-WOW
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_REALWOW_RSPACKET(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 8, __Value)
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_REALWOW_BUBBPACKET(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_REALWOW_TEREDONFO(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+2, 0, 8, __Value)
// AOAC_RSVDPAGE_LOC  For Real-WOW V2
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_REALWOW_V2INFO(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+3, 0, 8, __Value)
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_REALWOW_V2KEEPPACKET(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+4, 0, 8, __Value)
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_REALWOW_V2ACKPATTERN(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+5, 0, 8, __Value)
#define SET_8723B_H2CCMD_AOAC_RSVDPAGE_LOC_REALWOW_V2WAKEUPPATTERN(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+6, 0, 8, __Value)

//	

// RSVDPAGE_LOC_3
#define SET_8723B_H2CCMD_RSVDPAGE_LOC_3_NLO_INFO(__pH2CCmd, __Value)					SET_BITS_TO_LE_1BYTE((__pH2CCmd), 0, 8, __Value)
#define SET_8723B_H2CCMD_RSVDPAGE_LOC_3_AOAC_REPORT(__pH2CCmd, __Value)					SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)

#define GET_8723B_H2CCMD_RSVDPAGE_LOC_3_AOAC_REPORT(__pH2CCmd)						LE_BITS_TO_1BYTE((__pH2CCmd)+1, 0, 8)

//_SCAN_OFFLOAD_CTRL
#define SET_8723B_H2CCMD_SCAN_OFFLOAD_CTRL_PARM_D0_SCAN_FUNC_ENABLE(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 1, __Value)
#define SET_8723B_H2CCMD_SCAN_OFFLOAD_CTRL_PARM_RTD3_FUNC_ENABLE(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 1, 1, __Value)
#define SET_8723B_H2CCMD_SCAN_OFFLOAD_CTRL_PARM_U3_SCAN_FUNC_ENABLE(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 2, 1, __Value)
#define SET_8723B_H2CCMD_SCAN_OFFLOAD_CTRL_PARM_NLO_FUNC_ENABLE(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 3, 1, __Value)
#define SET_8723B_H2CCMD_SCAN_OFFLOAD_CTRL_PARM_IPS_DEPENDENT(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE(__pH2CCmd, 4, 1, __Value)
#define SET_8723B_H2CCMD_SCAN_OFFLOAD_CTRL_PARM_RSVDPAGE_LOC(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)
#define SET_8723B_H2CCMD_SCAN_OFFLOAD_CTRL_PARM_CHNL_INFO_LOC(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd)+2, 0, 8, __Value)
#define SET_8723B_H2CCMD_SCAN_OFFLOAD_CTRL_PARM_SSID_INFO_LOC(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd)+3, 0, 8, __Value)

#define GET_8723B_H2CCMD_SCAN_OFFLOAD_CTRL_PARM_ENABLE(__pH2CCmd)					LE_BITS_TO_1BYTE(__pH2CCmd, 0, 8)

//_CHANNEL_PATTERN
#define SET_8723B_H2CCMD_CHANNEL_PATTERN_PARM_CHNL_NUM(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 8, __Value)
#define SET_8723B_H2CCMD_CHANNEL_PATTERN_PARM_TXPWRIDX(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)
#define SET_8723B_H2CCMD_CHANNEL_PATTERN_PARM_TIMEOUT(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd)+2, 0, 8, __Value)
#define SET_8723B_H2CCMD_CHANNEL_PATTERN_PARM_ACTIVE(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd)+3, 0, 8, __Value)

// BT_FW_PATCH
//#define SET_8723B_H2CCMD_BT_FW_PATCH_ENABLE(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 1, __Value)
#define SET_8723B_H2CCMD_BT_FW_PATCH_SIZE(__pH2CCmd, __Value)					SET_BITS_TO_LE_2BYTE((pu1Byte)(__pH2CCmd), 0, 16, __Value)
#define SET_8723B_H2CCMD_BT_FW_PATCH_ADDR0(__pH2CCmd, __Value)					SET_BITS_TO_LE_1BYTE((pu1Byte)(__pH2CCmd)+2, 0, 8, __Value)
#define SET_8723B_H2CCMD_BT_FW_PATCH_ADDR1(__pH2CCmd, __Value)					SET_BITS_TO_LE_1BYTE((pu1Byte)(__pH2CCmd)+3, 0, 8, __Value)
#define SET_8723B_H2CCMD_BT_FW_PATCH_ADDR2(__pH2CCmd, __Value)					SET_BITS_TO_LE_1BYTE((pu1Byte)(__pH2CCmd)+4, 0, 8, __Value)
#define SET_8723B_H2CCMD_BT_FW_PATCH_ADDR3(__pH2CCmd, __Value)					SET_BITS_TO_LE_1BYTE((pu1Byte)(__pH2CCmd)+5, 0, 8, __Value)

//_INACTIVE_PS_CTRL
#define SET_8723B_H2CCMD_INACTIVE_PS_PARM_FUNC_ENABLE(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 1, __Value)
#define SET_8723B_H2CCMD_INACTIVE_PS_PARM_IGNORE_PS_CONDITION(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 1, 1, __Value)
#define SET_8723B_H2CCMD_INACTIVE_PS_PARM_SCAN_FREQUENCY(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value)
#define SET_8723B_H2CCMD_INACTIVE_PS_PARM_DURATION(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE((__pH2CCmd)+2, 0, 8, __Value)

#define GET_8723B_H2CCMD_INACTIVE_PS_PARM_FUNC_ENABLE(__pH2CCmd)		LE_BITS_TO_1BYTE(__pH2CCmd, 0, 1)

// Disconnect_Decision_Control
// <Note> 
// 1. The value "CHECK_PERIOD" should be larger than 5 which Fw checks beacon lost period.
// 2. "TRY_OK_BCN_LOST_CNT" should be smaller than "CHECK_PERIOD".
#define SET_8723B_H2CCMD_DISCONNECT_DECISION_CTRL_ENABLE(__pH2CCmd, __Value)			SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 1, __Value)
#define SET_8723B_H2CCMD_DISCONNECT_DECISION_CTRL_USER_SETTING(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 1, 1, __Value)
#define SET_8723B_H2CCMD_DISCONNECT_DECISION_CTRL_CNT_BCN_LOST_EN(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE(__pH2CCmd, 2, 1, __Value)
#define SET_8723B_H2CCMD_DISCONNECT_DECISION_CTRL_CHECK_PERIOD(__pH2CCmd, __Value)	SET_BITS_TO_LE_1BYTE((__pH2CCmd)+1, 0, 8, __Value) // unit: beacon period
#define SET_8723B_H2CCMD_DISCONNECT_DECISION_CTRL_TRYPKT_NUM(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd)+2, 0, 8, __Value)
#define SET_8723B_H2CCMD_DISCONNECT_DECISION_CTRL_TRY_OK_BCN_LOST_CNT(__pH2CCmd, __Value)		SET_BITS_TO_LE_1BYTE((__pH2CCmd)+3, 0, 8, __Value)

// WIFI_CALIBRATION
#define SET_8723B_H2CCMD_WIFI_CALIBRATION_EN(__pH2CCmd, __Value)				SET_BITS_TO_LE_1BYTE(__pH2CCmd, 0, 1, __Value)


//------------------------------------
//     C2H format
//------------------------------------

// TX Beamforming
#define GET_8723B_C2H_TXBF_ORIGINATE(_Header)			LE_BITS_TO_1BYTE(_Header, 0, 8)
#define GET_8723B_C2H_TXBF_MACID(_Header)				LE_BITS_TO_1BYTE((_Header + 1), 0, 8)

/// TX Feedback Content
#define 	USEC_UNIT_FOR_8723B_C2H_TX_RPT_QUEUE_TIME			256

#define	GET_8723B_C2H_TX_RPT_QUEUE_SELECT(_Header)			LE_BITS_TO_1BYTE((_Header + 0), 0, 5)
#define	GET_8723B_C2H_TX_RPT_PKT_BROCAST(_Header)			LE_BITS_TO_1BYTE((_Header + 0), 5, 1)
#define	GET_8723B_C2H_TX_RPT_LIFE_TIME_OVER(_Header)			LE_BITS_TO_1BYTE((_Header + 0), 6, 1)
#define	GET_8723B_C2H_TX_RPT_RETRY_OVER(_Header)				LE_BITS_TO_1BYTE((_Header + 0), 7, 1)
#define	GET_8723B_C2H_TX_RPT_MAC_ID(_Header)					LE_BITS_TO_1BYTE((_Header + 1), 0, 8)
#define	GET_8723B_C2H_TX_RPT_DATA_RETRY_CNT(_Header)		LE_BITS_TO_1BYTE((_Header + 2), 0, 6)
#define	GET_8723B_C2H_TX_RPT_QUEUE_TIME(_Header)				LE_BITS_TO_2BYTE((_Header + 3), 0, 16)	// In unit of 256 microseconds.
#define	GET_8723B_C2H_TX_RPT_FINAL_DATA_RATE(_Header)		LE_BITS_TO_1BYTE((_Header + 5), 0, 8)

#define	GET_8723B_C2H_FCS_STATUS(_Header)		LE_BITS_TO_1BYTE((_Header + 0), 0, 8)

typedef enum _RTL8723B_H2C_CMD 
{
	H2C_8723B_RSVDPAGE = 0,
	H2C_8723B_MSRRPT = 1,
	H2C_8723B_SCAN = 2,
	H2C_8723B_KEEP_ALIVE_CTRL = 3,
	H2C_8723B_DISCONNECT_DECISION = 4,

	H2C_8723B_INIT_OFFLOAD = 6,		
	H2C_8723B_AP_OFFLOAD = 8,
	H2C_8723B_BCN_RSVDPAGE = 9,
	H2C_8723B_PROBERSP_RSVDPAGE = 10,
	
	H2C_8723B_FCS_LOCATION = 0x10,
	H2C_8723B_FCS_INFO = 0x11,
	H2C_8723B_FCS_UPDATE_PARAM = 0x15,
	H2C_8723B_FCS_MACID_BITMAP = 0x16,
	H2C_8723B_FCS_INFO_V2 = 0x18,
	
	H2C_8723B_SETPWRMODE = 0x20,		
	H2C_8723B_PS_TUNING_PARA = 0x21,
	H2C_8723B_PS_TUNING_PARA2 = 0x22,
	H2C_8723B_PS_LPS_PARA = 0x23,
	H2C_8723B_P2P_PS_OFFLOAD = 0x24,
	H2C_8723B_INACTIVE_PS = 0x27,
	
	H2C_8723B_RA_MASK = 0x40,
	H2C_8723B_RSSI_REPORT = 0x42,

	H2C_8723B_BT_FW_PATCH = 0x6a,
	H2C_8723B_WIFI_CALIBRATION = 0x6d,

	H2C_8723B_WO_WLAN = 0x80,
	H2C_8723B_REMOTE_WAKE_CTRL = 0x81,
	H2C_8723B_AOAC_GLOBAL_INFO = 0x82,
	H2C_8723B_AOAC_RSVDPAGE = 0x83,
	H2C_8723B_AOAC_RSVDPAGE2 = 0x84,
	H2C_8723B_SCAN_OFFLOAD_CTRL = 0x86,
	H2C_8723B_AOAC_RSVDPAGE3 = 0x88,

	//Not defined in new 88E H2C CMD Format
	H2C_8723B_SELECTIVE_SUSPEND_ROF_CMD,
	H2C_8723B_P2P_PS_MODE,
	H2C_8723B_PSD_RESULT,
	MAX_8723B_H2CCMD
}RTL8723B_H2C_CMD;


typedef enum _RTL8723B_C2H_EVT
{
	C2H_8723B_DBG = 0,
	C2H_8723B_LB = 1,
	C2H_8723B_TXBF = 2,
	C2H_8723B_TX_REPORT = 3,
	C2H_8723B_BT_INFO = 9,
	C2H_8723B_BT_MP = 11,
	C2H_8723B_RA_RPT = 12,
	C2H_8723B_RA_PARA_RPT = 14,
	C2H_8723B_FCS = 0x17,
	C2H_8723B_DBG_CODE = 0xFE,
	C2H_8723B_EXTEND = 0xFF,
	MAX_8723B_C2HEVENT
}RTL8723B_C2H_EVT;


typedef enum _RTL8723B_EXTEND_C2H_EVT
{
	EXTEND_C2H_8723B_DBG_PRINT = 0

}RTL8723B_EXTEND_C2H_EVT;


//==========================================================

VOID
SetBcnCtrlReg_8192C(
	IN	PADAPTER	Adapter,
	IN	u1Byte		SetBits,
	IN	u1Byte		ClearBits
);


RT_STATUS
BTFwPatch8723B(
	IN	PADAPTER			Adapter
);


RT_STATUS
FirmwareDownload8723B(
	IN	PADAPTER			Adapter,
	IN	BOOLEAN			bUsedWoWLANFw
);


VOID
FillH2CCmd8723B(
	IN	PADAPTER		Adapter,
	IN	u1Byte 	ElementID,
	IN	u4Byte 	CmdLen,
	IN	pu1Byte	pCmdBuffer
);

u4Byte
FillH2CCommand8723B(
	IN	PADAPTER		Adapter,
	IN	u1Byte 	ElementID,
	IN	u4Byte 	CmdLen,
	IN	pu1Byte	pCmdBuffer
);


VOID
SetFwPwrModeCmd_8723B(
	IN PADAPTER	Adapter,
	IN u1Byte	Mode
);

VOID
SetFwMediaStatusRptCmd_8723B(
	IN PADAPTER	Adapter,
	IN u1Byte	mstatus,
	IN BOOLEAN	macId_Ind,
	IN u1Byte 	macId,
	IN u1Byte	macId_End
	);

VOID
SetFwRemoteWakeCtrlCmd_8723B(
	IN PADAPTER	Adapter,
	IN u1Byte		Enable
);

VOID
SetFwGlobalInfoCmd_8723B(
	IN PADAPTER	Adapter
);

VOID
SetFwScanOffloadCtrlCmd_8723B(
	IN PADAPTER		Adapter,
	IN u1Byte		Type,
	IN u1Byte		ScanOffloadEnable,
	IN u1Byte		NLOEnable
);

VOID
SetFwInactivePSCmd_8723B(
	IN PADAPTER		Adapter,
	IN u1Byte		Enable,
	IN BOOLEAN		bActiveWakeup,
	IN BOOLEAN		bForceClkOff
);

VOID
SetFwDisconnectDecisionCtrlCmd_8723B(
	IN PADAPTER	Adapter,
	IN BOOLEAN	bEnabled
);

VOID
SetFwWiFiCalibrationCmd_8723B(
	IN PADAPTER	Adapter,
	IN u1Byte	u1Enable
);

VOID
C2HPacketHandler_8723B(
	IN	PADAPTER		Adapter,
	IN	pu1Byte			Buffer,
	IN	u1Byte			Length
	);

VOID
ExtendC2HPacketHandler_8723B(
	IN	pu1Byte			Buffer,
	IN	u1Byte			c2hCmdLen
	);


VOID
C2HCommandHandler_8723B(
	IN	PADAPTER		Adapter
);

VOID
CheckFwRsvdPageContent_8723B(
	IN	PADAPTER		Adapter
);

VOID
SetFwRsvdPagePkt_8723B(
	IN PADAPTER			Adapter,
	IN BOOLEAN			bDLFinished
);

VOID
FillFakeTxDescriptor_8723B(
	IN PADAPTER	Adapter,
	IN pu1Byte	pDesc,
	IN u4Byte		BufferLen,
	IN BOOLEAN	IsPsPoll,
	IN BOOLEAN	IsBTQosNull,
	IN BOOLEAN	bDataFrame
);
#if(FW_QUEME_MECHANISM_NEW != 1)
VOID
AddH2CCmdQueue_8723B(
	IN	PADAPTER		Adapter,
	IN	u1Byte 	ElementID,
	IN	u4Byte 	CmdLen,
	IN	pu1Byte	pCmdBuffer
);

BOOLEAN
RetriveH2CCmdQueue_8723B(
	IN	PADAPTER		Adapter,
	IN	pu1Byte		pH2CCmdBuf
);
VOID
_WriteFW_8723B(
	IN		PADAPTER		Adapter,
	IN		PVOID			buffer,
	IN		u4Byte			size
);
VOID
_FWDownloadEnable_8723B(
	IN	PADAPTER		Adapter,
	IN	BOOLEAN			enable
);

#endif
#endif

VOID
SetFwFcsLocCmd_8723B(
	IN	PADAPTER		Adapter
);

VOID
SetFwFcsInfoCmd_8723B(
	IN	PADAPTER		Adapter,
	IN	pu1Byte			pContext,
	IN	BOOLEAN			bSet
);

