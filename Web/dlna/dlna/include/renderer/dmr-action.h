/*
 *
 *  Rockchip device media renderer action process.
 *
 *    2014-01-16 by rockchip IOT team.
 *
 *
 */
#ifndef _DMR_ACTION_H_
#define _DMR_ACTION_H_
#include <cybergarage/upnp/std/av/cmediarenderer.h>

// AV transport service macros.
#define CG_UPNPAV_DMR_AVTRANSPORT_SEEK "Seek"
#define CG_UPNPAV_DMR_AVTRANSPORT_PLAY "Play"
#define CG_UPNPAV_DMR_AVTRANSPORT_PAUSE "Pause"
#define CG_UPNPAV_DMR_AVTRANSPORT_UNIT   "Unit"
#define CG_UPNPAV_DMR_AVTRANSPORT_CURRENTURI "CurrentURI"
#define CG_UPNPAV_DMR_AVTRANSPORT_REL_COUNT  "RelCount"
#define CG_UPNPAV_DMR_AVTRANSPORT_REL_TIME   "RelTime"
#define CG_UPNPAV_DMR_AVTRANSPORT_ABS_COUNT  "AbsCount"
#define CG_UPNPAV_DMR_AVTRANSPORT_ABS_TIME   "AbsTime"
#define CG_UPNPAV_DMR_AVTRANSPORT_TARGET    "Target"
#define CG_UPNPAV_DMR_AVTRANSPORT_TRACK  "Track"
#define CG_UPNPAV_DMR_AVTRANSPORT_TRACK_URL  "TrackURI"
#define CG_UPNPAV_DMR_AVTRANSPORT_NRTRACKS "NrTracks"
#define CG_UPNPAV_DMR_AVTRANSPORT_RELTIME   "REL_TIME"
#define CG_UPNPAV_DMR_AVTRANSPORT_RESET "Reset"
#define CG_UPNPAV_DMR_AVTRANSPORT_TRANSPORT_STATE "TransportState"
#define CG_UPNPAV_DMR_AVTRANSPORT_TRACK_DURATION  "TrackDuration"
#define CG_UPNPAV_DMR_AVTRANSPORT_TRACK_METADATA  "TrackMetaData"
#define CG_UPNPAV_DMR_AVTRANSPORT_SETAVTRANSPORTURI "SetAVTransportURI"
#define CG_UPNPAV_DMR_AVTRANSPORT_GETPOSITIONINFO "GetPositionInfo"
#define CG_UPNPAV_DMR_AVTRANSPORT_GETMEDIAINFO "GetMediaInfo"
#define CG_UPNPAV_DMR_AVTRANSPORT_MEDIA_DURATION "MediaDuration"
#define CG_UPNPAV_DMR_AVTRANSPORT_CURRENTTRANSPORTSTATE_PLAYING "PLAYING"
#define CG_UPNPAV_DMR_AVTRANSPORT_CURRENTTRANSPORTSTATE_PAUSED_PLAYBACK  "PAUSED_PLAYBACK"
#define CG_UPNPAV_DMR_AVTRANSPORT_CURRENTTRANSPORTSTATE_NO_MEDIA "NO_MEDIA_PRESENT"
#define CG_UPNPAV_DMR_AVTRANSPORT_CURRENTTRANSPORTSTATE_TRANSITIONING "TRANSITIONING"
#define CG_UPNPAV_DMR_AVTRANSPORT_NOT_IMPLEMENTED  "NOT_IMPLEMENTED"

// Rendering control service macros.
#define CG_UPNPAV_DMR_RENDERINGCONTROL_VOLUME "Volume"

extern BOOL dmr_actionreceived(CgUpnpAction * action);

#endif
