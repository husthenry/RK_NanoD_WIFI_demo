/********************************************************************
 This file was generated by menu Tool of Rockchip Co., Ltd.

 Generate time: 2015-5-12 21:47:43

 Tool Version: 3.0.0.0

 End.
********************************************************************/
#ifndef          _MENU_RESOURCE_H
#define          _MENU_RESOURCE_H


#define          MENU_ITEM_LENGTH            (unsigned short)254             // The length of menu item in bytes
#define          TOTAL_MENU_ITEM             (unsigned short)177
#define          TOTAL_LANAUAGE_NUM          (unsigned short)19
#define          MAX_SUBMENU_NUM             (unsigned short)19
#define          MENU_CONTENT_OFFSET         (unsigned short)54





#define          SID_MUSIC                                        (unsigned short)0x0000       //音乐播放
#define          SID_RADIO                                        (unsigned short)0x0001       //收音机
#define          SID_RECORD                                       (unsigned short)0x0002       //录　音
#define          SID_TEXT                                         (unsigned short)0x0003       //电子书
#define          SID_EXPLORER                                     (unsigned short)0x0004       //资源管理器
#define          SID_MAIN_SETTINGS                                (unsigned short)0x0005       //设　置
#define          SID_VIDEO                                        (unsigned short)0x0006       //视频播放
#define          SID_PHOTO                                        (unsigned short)0x0007       //图片浏览
#define          SID_FM_RADIO                                     (unsigned short)0x0008       //FM 收音机
#define          SID_GAME                                         (unsigned short)0x0009       //游　戏
#define          SID_NOR                                          (unsigned short)0x000a       //NOR
#define          SID_PLAYFX                                       (unsigned short)0x000b       //PlayFX
#define          SID_ROCK                                         (unsigned short)0x000c       //ROCK
#define          SID_POP                                          (unsigned short)0x000d       //POP
#define          SID_CLASS                                        (unsigned short)0x000e       //CLASS
#define          SID_BASS                                         (unsigned short)0x000f       //BASS
#define          SID_JAZZ                                         (unsigned short)0x0010       //JAZZ
#define          SID_USER                                         (unsigned short)0x0011       //USER
#define          SID_UNKNOWN                                      (unsigned short)0x0012       //~未知~
#define          SID_NO_LYRIC_FILE                                (unsigned short)0x0013       //~没有歌词文件~
#define          SID_MANUAL                                       (unsigned short)0x0014       //手动
#define          SID_PRESET                                       (unsigned short)0x0015       //预设
#define          SID_MEM                                          (unsigned short)0x0016       //保存
#define          SID_DEL                                          (unsigned short)0x0017       //删除
#define          SID_AUTO                                         (unsigned short)0x0018       //自动
#define          SID_REC                                          (unsigned short)0x0019       //Rec
#define          SID_PLAY_REC_DATA                                (unsigned short)0x001a       //Play Rec Data
#define          SID_DELETE_REC_DATA                              (unsigned short)0x001b       //Delete Rec Data
#define          SID_DELETE_ALL                                   (unsigned short)0x001c       //Delete All
#define          SID_ALL_REC_DATA                                 (unsigned short)0x001d       //All Rec Data
#define          SID_DELETE_ALL_COMFIRM                           (unsigned short)0x001e       //Delete All?
#define          SID_DELETING                                     (unsigned short)0x001f       //Deleting…
#define          SID_SAVE_CHANNEL                                 (unsigned short)0x0020       //保存该电台？
#define          SID_DELETE_CHANNEL                               (unsigned short)0x0021       //删除该电台？
#define          SID_SAVE_BOOKMARK                                (unsigned short)0x0022       //保存书签
#define          SID_LOAD_BOOKMARK                                (unsigned short)0x0023       //提取书签
#define          SID_MIC_REC                                      (unsigned short)0x0024       //MIC REC
#define          SID_LINE_IN_REC                                  (unsigned short)0x0025       //LINE IN REC
#define          SID_FM_REC                                       (unsigned short)0x0026       //FM REC
#define          SID_RECORDING                                    (unsigned short)0x0027       //正在录音...
#define          SID_RECORD_PAUSE                                 (unsigned short)0x0028       //暂停录音...
#define          SID_RECORD_PREPARE                               (unsigned short)0x0029       //准备录音...
#define          SID_RECORD_SAVE_FILE                             (unsigned short)0x002a       //保存录音文件...
#define          SID_CREAT_FILE_ERROR                             (unsigned short)0x002b       //创建文件失败！
#define          SID_DISK_IS_FULL                                 (unsigned short)0x002c       //磁盘空间已满！
#define          SID_FLASH_MEMERY                                 (unsigned short)0x002d       //Flash Memery
#define          SID_MINISD_CARD                                  (unsigned short)0x002e       //MiniSD Card
#define          SID_COULD_NOT_CONTINUE                           (unsigned short)0x002f       //Could not continue
#define          SID_WARNING                                      (unsigned short)0x0030       //警告！
#define          SID_YES                                          (unsigned short)0x0031       //确定
#define          SID_NO                                           (unsigned short)0x0032       //取消
#define          SID_EXIT                                         (unsigned short)0x0033       //退出
#define          SID_PLEASE_WAIT                                  (unsigned short)0x0034       //请稍等……
#define          SID_LOW_BATTERY                                  (unsigned short)0x0035       //电池电量不足!
#define          SID_FIRMWARE_UPGRADE                             (unsigned short)0x0036       //固件升级！
#define          SID_PLEASE_INSERT_USB                            (unsigned short)0x0037       //请插入USB……
#define          SID_RESTORE_DEFAULT_VAL                          (unsigned short)0x0038       //恢复系统默认值？
#define          SID_FORMAT_DISK                                  (unsigned short)0x0039       //格式化磁盘？
#define          SID_FORMATTING                                   (unsigned short)0x003a       //正在格式化……
#define          SID_FILE_FORMAT_ERROR                            (unsigned short)0x003b       //文件格式不支持!
#define          SID_NO_MUSIC_FILE                                (unsigned short)0x003c       //沒有音乐文件!
#define          SID_DELETE_FILE                                  (unsigned short)0x003d       //删除文件
#define          SID_DELETE_FILE_ASK                              (unsigned short)0x003e       //删除文件?
#define          SID_DELETING_FILE                                (unsigned short)0x003f       //正在删除文件……
#define          SID_MUSIC_FILE                                   (unsigned short)0x0040       //音乐文件
#define          SID_VIDEO_FILE                                   (unsigned short)0x0041       //视频文件
#define          SID_TEXT_FILE                                    (unsigned short)0x0042       //电子书
#define          SID_PICTURE_FILE                                 (unsigned short)0x0043       //图片文件
#define          SID_EXPLORER                                     (unsigned short)0x0044       //资源管理器
#define          SID_C_FLASH                                      (unsigned short)0x0045       //C:FLASH
#define          SID_D_FLASH                                      (unsigned short)0x0046       //D:FLASH
#define          SID_D_SD_CARD                                    (unsigned short)0x0047       //D:SD CARD
#define          SID_E_SD_CARD                                    (unsigned short)0x0048       //E:SD CARD
#define          SID_NO_FILE                                      (unsigned short)0x0049       //没有文件!
#define          SID_SAVE_BOOKMARK                                (unsigned short)0x004a       //保存书签
#define          SID_LOAD_BOOKMARK                                (unsigned short)0x004b       //提取书签
#define          SID_WRITE_FILE_ERROR                             (unsigned short)0x004c       //写文件失败！
#define          SID_CLOSE_FILE_ERROR                             (unsigned short)0x004d       //关闭文件失败！
#define          SID_MEDIALIB                                     (unsigned short)0x004e       //媒体库
#define          SID_PLAYING                                      (unsigned short)0x004f       //正在播放
#define          SID_ALL_MUISC_FILE                               (unsigned short)0x0050       //所有音乐
#define          SID_ARTIST                                       (unsigned short)0x0051       //艺术家
#define          SID_ALBUM                                        (unsigned short)0x0052       //专辑
#define          SID_GENRE                                        (unsigned short)0x0053       //流派
#define          SID_PLAY_LIST                                    (unsigned short)0x0054       //播放列表
#define          SID_DIR_LIST                                     (unsigned short)0x0055       //目录列表
#define          SID_RECORE_FILE                                  (unsigned short)0x0056       //录音文件
#define          SID_MY_FAVORITE                                  (unsigned short)0x0057       //我的收藏夹
#define          SID_UPDATE_MEDIALIB                              (unsigned short)0x0058       //更新媒体库
#define          SID_UPDATEING_FIRMWARE                           (unsigned short)0x0059       //固件升级中……
#define          SID_RECOVER_FIRMWARE                             (unsigned short)0x005a       //固件恢复中……
#define          SID_HOLDON_PLAY                                  (unsigned short)0x005b       //断点播放
#define          SID_TITLE                                        (unsigned short)0x005c       //标题
#define          SID_ADD_FAVORITE                                 (unsigned short)0x005d       //加入收藏夹
#define          SID_CLEAR_FAVORITE                               (unsigned short)0x005e       //清空收藏夹
#define          SID_UPDATEING_MEDIALIB                           (unsigned short)0x005f       //更新媒体库……
#define          SID_CONNECTING_USB                               (unsigned short)0x0060       //Connecting USB
#define          SID_CHARGING                                     (unsigned short)0x0061       //Charging
#define          SID_FULL_CHANGED                                 (unsigned short)0x0062       //Fully charged
#define          SID_CANNOT_CHARGE                                (unsigned short)0x0063       //Cannot charge
#define          SID_DATA_EX_NOT_DISCONNECT_LINE1                 (unsigned short)0x0064       //Do not
#define          SID_DATA_EX_NOT_DISCONNECT_LINE2                 (unsigned short)0x0065       //disconnect
#define          SID_DATA_EX_NOT_DISCONNECT_LINE3                 (unsigned short)0x0066       //
#define          SID_VOLUME                                       (unsigned short)0x0067       //Volume
#define          SID_UPDATING_LIBRARY                             (unsigned short)0x0068       //Updating Library
#define          SID_AVLS                                         (unsigned short)0x0069       //AVLS
#define          SID_VOLUME_LIMIT_LINE1                           (unsigned short)0x006a       //Check The
#define          SID_VOLUME_LIMIT_LINE2                           (unsigned short)0x006b       //Volume Level
//-----------------------------------------------------------------------------------------------------------------------------
//-------This is a menu-------
#define          SID_SETTINGS                                     (unsigned short)0x006c       //设　置
#define          SID_SETTING_MUSIC                                (unsigned short)0x006d       //放音设置
#define          SID_MUSIC_SHUFFLE                                (unsigned short)0x006e       //随机播放
#define          SID_MUSIC_SHUFFLE_OFF                            (unsigned short)0x006f       //开启随机播放          [Function Index: 0000]
#define          SID_MUSIC_SHUFFLE_ON                             (unsigned short)0x0070       //关闭随机播放          [Function Index: 0001]
#define          SID_MUSIC_REPEAT_MODE                            (unsigned short)0x0071       //重复设置
#define          SID_MUSIC_FOLDER_ONCE                            (unsigned short)0x0072       //关闭                  [Function Index: 0002]
#define          SID_MUSIC_FOLDER_REPEAT                          (unsigned short)0x0073       //目录重复              [Function Index: 0003]
#define          SID_MUSIC_REPEAT_ONE                             (unsigned short)0x0074       //单曲重复              [Function Index: 0004]
#define          SID_BASS_BOOST                                   (unsigned short)0x0075       //低音增强
#define          SID_BASS_BOOST_ON                                (unsigned short)0x0076       //开启低音增强          [Function Index: 0005]
#define          SID_BASS_BOOST_OFF                               (unsigned short)0x0077       //关闭低音增强          [Function Index: 0006]
#define          SID_EQ_SELECT                                    (unsigned short)0x0078       //EQ选择
#define          SID_EQ_HEAVY                                     (unsigned short)0x0079       //Heavy                 [Function Index: 0007]
#define          SID_EQ_POP                                       (unsigned short)0x007a       //流行                  [Function Index: 0008]
#define          SID_EQ_JAZZ                                      (unsigned short)0x007b       //爵士                  [Function Index: 0009]
#define          SID_EQ_UNIQUE                                    (unsigned short)0x007c       //独特                  [Function Index: 0010]
#define          SID_EQ_CUSTOM                                    (unsigned short)0x007d       //用户自定              [Function Index: 0011]
#define          SID_EQ_CUSTOM_EDIT                               (unsigned short)0x007e       //└ 编辑               [Function Index: 0012]
#define          SID_EQ_NONE                                      (unsigned short)0x007f       //正常                  [Function Index: 0013]
#define          SID_SETTING_RADIO                                (unsigned short)0x0080       //收音设置
#define          SID_RADIO_SCAN_SENSITIVITY                       (unsigned short)0x0081       //扫描敏感度
#define          SID_SCAN_SENSITIVITY_HIGH                        (unsigned short)0x0082       //高敏感度              [Function Index: 0014]
#define          SID_SCAN_SENSITIVITY_LOW                         (unsigned short)0x0083       //低敏感度              [Function Index: 0015]
#define          SID_FM_AUTO_PRESET                               (unsigned short)0x0084       //自动预设              [Function Index: 0016]
#define          SID_SETTING_COMMON                               (unsigned short)0x0085       //一般设定
#define          SID_COMMON_AVLS                                  (unsigned short)0x0086       //AVLS(音量限定)
#define          SID_AVLS_OFF                                     (unsigned short)0x0087       //开启 AVLS             [Function Index: 0017]
#define          SID_AVLS_ON                                      (unsigned short)0x0088       //关闭 AVLS             [Function Index: 0018]
#define          SID_COMMON_BEEP                                  (unsigned short)0x0089       //提示音设定
#define          SID_BEEP_ON                                      (unsigned short)0x008a       //开启提示音            [Function Index: 0019]
#define          SID_BEEP_OFF                                     (unsigned short)0x008b       //关闭提示音            [Function Index: 0020]
#define          SID_COMMON_SCREEN_OFF_TIMER                      (unsigned short)0x008c       //屏幕关闭定时器
#define          SID_SCREEN_OFF_15_SEC                            (unsigned short)0x008d       //15 秒                 [Function Index: 0021]
#define          SID_SCREEN_OFF_30_SEC                            (unsigned short)0x008e       //30 秒                 [Function Index: 0022]
#define          SID_SCREEN_OFF_1_MIN                             (unsigned short)0x008f       //1 分钟                [Function Index: 0023]
#define          SID_SCREEN_OFF_3_MIN                             (unsigned short)0x0090       //3 分钟                [Function Index: 0024]
#define          SID_SCREEN_OFF_5_MIN                             (unsigned short)0x0091       //5 分钟                [Function Index: 0025]
#define          SID_SCREEN_OFF_30_MIN                            (unsigned short)0x0092       //30 分钟               [Function Index: 0026]
#define          SID_COMMON_BRIGHTNESS                            (unsigned short)0x0093       //亮度设定
#define          SID_LUM_1                                        (unsigned short)0x0094       //1                     [Function Index: 0027]
#define          SID_LUM_2                                        (unsigned short)0x0095       //2                     [Function Index: 0028]
#define          SID_LUM_3                                        (unsigned short)0x0096       //3                     [Function Index: 0029]
#define          SID_LUM_4                                        (unsigned short)0x0097       //4                     [Function Index: 0030]
#define          SID_LUM_5                                        (unsigned short)0x0098       //5                     [Function Index: 0031]
#define          SID_SYS_ABOUT                                    (unsigned short)0x0099       //产品信息              [Function Index: 0032]
#define          SID_LANGUAGE                                     (unsigned short)0x009a       //语言设定
#define          SID_CHINESE_S                                    (unsigned short)0x009b       //简体中文              [Function Index: 0033]
#define          SID_CHINESE_T                                    (unsigned short)0x009c       //繁體中文              [Function Index: 0034]
#define          SID_ENGLISH                                      (unsigned short)0x009d       //English               [Function Index: 0035]
#define          SID_KOREAN                                       (unsigned short)0x009e       //??                    [Function Index: 0036]
#define          SID_JAPANESE                                     (unsigned short)0x009f       //日本語                [Function Index: 0037]
#define          SID_FRENCH                                       (unsigned short)0x00a0       //Fran?ais              [Function Index: 0038]
#define          SID_GERMAN                                       (unsigned short)0x00a1       //Deutsch               [Function Index: 0039]
#define          SID_PORTUGUESE                                   (unsigned short)0x00a2       //Português            [Function Index: 0040]
#define          SID_RUSSIAN                                      (unsigned short)0x00a3       //Русский        [Function Index: 0041]
#define          SID_SWEDISH                                      (unsigned short)0x00a4       //Svenska               [Function Index: 0042]
#define          SID_THAI                                         (unsigned short)0x00a5       //???????               [Function Index: 0043]
#define          SID_POLISH                                       (unsigned short)0x00a6       //j?zyk polski          [Function Index: 0044]
#define          SID_DENISH                                       (unsigned short)0x00a7       //Dansk                 [Function Index: 0045]
#define          SID_HOLLANDS                                     (unsigned short)0x00a8       //Hollands              [Function Index: 0046]
#define          SID_GREEK                                        (unsigned short)0x00a9       //Ελληνικ?       [Function Index: 0047]
#define          SID_CZECHIC                                      (unsigned short)0x00aa       //?í?tina              [Function Index: 0048]
#define          SID_TURKISH                                      (unsigned short)0x00ab       //Türk?e               [Function Index: 0049]
#define          SID_HEBREW                                       (unsigned short)0x00ac       //?????, ????           [Function Index: 0050]
#define          SID_ARABIC                                       (unsigned short)0x00ad       //Arabic                [Function Index: 0051]
#define          SID_SETTING_INITIALIZE                           (unsigned short)0x00ae       //初始化
#define          SID_SYS_DEFAULT_SET                              (unsigned short)0x00af       //恢复系统默认值        [Function Index: 0052]
#define          SID_FORMAT_DISK                                  (unsigned short)0x00b0       //格式化磁盘            [Function Index: 0053]





//-----------------------------------------------------------------------------------------------------------------------------
#define          SID_SETTINGS_ENTRY                               SID_SETTINGS       //设　置
#define          SID_SETTINGS_ENTRY_FUN_COUNTER                   0x0036


#endif
