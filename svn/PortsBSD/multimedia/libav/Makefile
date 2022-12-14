# $FreeBSD: head/multimedia/libav/Makefile 563430 2021-01-30 18:08:56Z tcberner $

PORTNAME=	libav
PORTVERSION=	12.3
PORTREVISION=	9
CATEGORIES=	multimedia audio net
MASTER_SITES=	http://libav.org/releases/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Realtime audio/video conversion library

LICENSE=	GPLv2+

BROKEN_aarch64=		fails to link: can't create dynamic relocation R_AARCH64_ABS64 against local symbol in readonly segment
BROKEN_armv6=		fails to compile: cc: warning: joined argument expects additional value: -mcpu=

BUILD_DEPENDS=	yasm:devel/yasm
LIB_DEPENDS=	libgmp.so:math/gmp \
		libvdpau.so:multimedia/libvdpau \
		libhogweed.so:security/nettle

USES=		cpe gmake localbase perl5 pkgconfig tar:xz xorg

USE_XORG=	x11
USE_PERL5=	build
USE_LDCONFIG=	${PREFIX}/lib/${PORTNAME}

HAS_CONFIGURE=	yes
NOPRECIOUSMAKEVARS=	yes # ARCH

CONFIGURE_ARGS=	--prefix="${PREFIX}" \
		--libdir="${PREFIX}/lib/${PORTNAME}" \
		--shlibdir="${PREFIX}/lib/${PORTNAME}" \
		--incdir="${PREFIX}/include/${PORTNAME}" \
		--mandir="${PREFIX}/man" \
		--datadir="${DATADIR}" \
		--extra-ldflags="-L${LOCALBASE}/lib" \
		--enable-pthreads \
		--enable-shared \
		--enable-runtime-cpudetect \
		--disable-debug \
		--cc="${CC}"

OPTIONS_DEFINE=	ALSA AMR_NB AMR_WB BZIP2 CDIO FAAC FDK_AAC DC1394 DOCS FREETYPE \
		FREI0R GNUTLS GSM ILBC JACK LAME OPENJPEG OPENSSL \
		OPUS PULSEAUDIO RTMP SCHROEDINGER SDL SPEEX THEORA V4L VAAPI \
		VDPAU VO_AACENC VO_AMRWBENC VORBIS VPX WAVPACK WEBP X11GRAB \
		X264 XVID ZLIB
OPTIONS_DEFAULT=BZIP2 FREETYPE FREI0R GNUTLS SCHROEDINGER \
		THEORA VAAPI VDPAU VO_AACENC VORBIS VPX X264 XVID ZLIB

FDK_AAC_DESC=	AAC audio encoding via Fraunhofer FDK
ILBC_DESC=	iLBC en/decoding via libilbc
X11GRAB_DESC=	X11 grabbing
DC1394_DESC=	IIDC-1394 grabbing using libdc1394

OPTIONS_SUB=	yes

ALSA_LIB_DEPENDS=		libasound.so:audio/alsa-lib
ALSA_CONFIGURE_ON=		--enable-indev=alsa --enable-outdev=alsa
ALSA_CONFIGURE_OFF=		--disable-indev=alsa --disable-outdev=alsa

AMR_NB_LIB_DEPENDS=		libopencore-amrnb.so:audio/opencore-amr
AMR_NB_CONFIGURE_ENABLE=	libopencore-amrnb

AMR_WB_LIB_DEPENDS=		libopencore-amrnb.so:audio/opencore-amr
AMR_WB_CONFIGURE_ENABLE=	libopencore-amrwb

BZIP2_CONFIGURE_ENABLE=		bzlib

CDIO_LIB_DEPENDS=		libcdio.so:sysutils/libcdio \
				libcdio_paranoia.so:sysutils/libcdio-paranoia
CDIO_CONFIGURE_ENABLE=		libcdio

DC1394_LIB_DEPENDS=		libdc1394.so:multimedia/libdc1394
DC1394_CONFIGURE_ENABLE=	libdc1394

DOCS_BUILD_DEPENDS=		texi2html:textproc/texi2html

FREI0R_BUILD_DEPENDS=		${LOCALBASE}/include/frei0r.h:graphics/frei0r
FREI0R_CONFIGURE_ENABLE=	frei0r

FAAC_LIB_DEPENDS=		libfaac.so:audio/faac
FAAC_CONFIGURE_ENABLE=		libfaac

FDK_AAC_LIB_DEPENDS=		libfdk-aac.so:audio/fdk-aac
FDK_AAC_CONFIGURE_ENABLE=	libfdk-aac

FREETYPE_LIB_DEPENDS=		libfreetype.so:print/freetype2
FREETYPE_CONFIGURE_ENABLE=	libfreetype

GNUTLS_LIB_DEPENDS=		libgnutls.so:security/gnutls
GNUTLS_CONFIGURE_ENABLE=	gnutls

GSM_LIB_DEPENDS=		libgsm.so:audio/gsm
GSM_CONFIGURE_ENABLE=		libgsm

ILBC_BUILD_DEPENDS=		${LOCALBASE}/include/ilbc.h:net/libilbc
ILBC_CONFIGURE_ENABLE=		libilbc

JACK_LIB_DEPENDS=		libjack.so:audio/jack
JACK_CONFIGURE_ON=		--enable-indev=jack
JACK_CONFIGURE_OFF=		--disable-indev=jack

LAME_LIB_DEPENDS=		libmp3lame.so:audio/lame
LAME_CONFIGURE_ENABLE=		libmp3lame

OPENJPEG_LIB_DEPENDS=		libopenjpeg.so:graphics/openjpeg15
OPENJPEG_CONFIGURE_ENABLE=	libopenjpeg

OPENSSL_CONFIGURE_ENABLE=	openssl
OPENSSL_USES=			ssl

OPUS_LIB_DEPENDS=		libopus.so:audio/opus
OPUS_CONFIGURE_ENABLE=		libopus

PULSEAUDIO_LIB_DEPENDS=		libpulse.so:audio/pulseaudio
PULSEAUDIO_CONFIGURE_ENABLE=	libpulse

RTMP_LIB_DEPENDS=		librtmp.so:multimedia/librtmp
RTMP_CONFIGURE_ENABLE=		librtmp

SCHROEDINGER_LIB_DEPENDS=	libschroedinger-1.0.so:multimedia/schroedinger
SCHROEDINGER_CONFIGURE_ENABLE=	libschroedinger

SDL_USES=			sdl
SDL_USE=			SDL=sdl
SDL_CONFIGURE_ENABLE=		avplay

SPEEX_LIB_DEPENDS=		libspeex.so:audio/speex
SPEEX_CONFIGURE_ENABLE=		libspeex

THEORA_LIB_DEPENDS=		libtheora.so:multimedia/libtheora
THEORA_CONFIGURE_ENABLE=	libtheora

V4L_BUILD_DEPENDS=		${LOCALBASE}/include/linux/videodev2.h:multimedia/v4l_compat
V4L_CONFIGURE_ON=		--enable-indev=v4l2
V4L_CONFIGURE_OFF=		--disable-indev=v4l2

VAAPI_LIB_DEPENDS=		libva.so:multimedia/libva
VAAPI_CONFIGURE_ENABLE=		vaapi

VDPAU_BUILD_DEPENDS=		${LOCALBASE}/include/vdpau/vdpau.h:multimedia/libvdpau
VDPAU_CONFIGURE_ENABLE=		vdpau

VO_AACENC_LIB_DEPENDS=		libvo-aacenc.so:audio/vo-aacenc
VO_AACENC_CONFIGURE_ENABLE=	libvo-aacenc

VO_AMRWBENC_LIB_DEPENDS=	libvo-amrwbenc.so:audio/vo-amrwbenc
VO_AMRWBENC_CONFIGURE_ENABLE=	libvo-amrwbenc

VORBIS_LIB_DEPENDS=		libvorbisenc.so:audio/libvorbis
VORBIS_CONFIGURE_ENABLE=	libvorbis

VPX_LIB_DEPENDS=		libvpx.so:multimedia/libvpx
VPX_CONFIGURE_ENABLE=		libvpx

WAVPACK_LIB_DEPENDS=		libwavpack.so:audio/wavpack
WAVPACK_CONFIGURE_ENABLE=	libwavpack

WEBP_LIB_DEPENDS=		libwebp.so:graphics/webp
WEBP_CONFIGURE_ENABLE=		libwebp

X11GRAB_USE=			XORG=x11,xext,xfixes

X264_LIB_DEPENDS=		libx264.so:multimedia/libx264
X264_CONFIGURE_ENABLE=		libx264

XVID_LIB_DEPENDS=		libxvidcore.so:multimedia/xvid
XVID_CONFIGURE_ENABLE=		libxvid

ZLIB_CONFIGURE_ENABLE=		zlib

.include <bsd.port.options.mk>

.if ${ARCH} == "armv6"
CONFIGURE_ENV+=	ASFLAGS=-no-integrated-as
.endif

.if ${ARCH} == "i386"
CONFIGURE_ARGS+=	--extra-cflags=-m32
LLD_UNSAFE=	yes
.endif

.if defined(PPC_ABI) && ${PPC_ABI} == ELFv2
USE_GCC=	yes
.else
USES+=	compiler:c++11-lang
.endif

# License definitions

.if ${PORT_OPTIONS:MFAAC} || ${PORT_OPTIONS:MFDK_AAC} || ${PORT_OPTIONS:MOPENSSL}
RESTRICTED=	linking to libfaac or libaacplus or using OpenSSL support restricts redistribution
CONFIGURE_ARGS+=	--enable-nonfree
AV_NONFREE=		true
.endif

.if ${PORT_OPTIONS:MCDIO} || ${PORT_OPTIONS:MX264} || ${PORT_OPTIONS:MXVID} || ${PORT_OPTIONS:MX11GRAB}
CONFIGURE_ARGS+=	--enable-gpl
.if !defined(AV_NONFREE)
AV_ISGPL=		true
.endif
.endif

.if ${PORT_OPTIONS:MAMR_NB} || ${PORT_OPTIONS:MAMR_WB} || ${PORT_OPTIONS:MVO_AACENC} || ${PORT_OPTIONS:MVO_AMRWBENC}
CONFIGURE_ARGS+=	--enable-version3
.if !defined(AV_NONFREE)
.if defined(AV_ISGPL)
LICENSE=	GPLv3+
.else
LICENSE=	LGPL3+
.endif
.endif
.endif

.if !defined(AV_NONFREE) && !defined(AV_ISGPL) && !defined(LICENSE)
LICENSE=	LGPL21+
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|freetype/freetype.h|freetype2/freetype.h|' \
		-e 's|-ldc1394 -lraw1394|-ldc1394|' \
		${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|gsm/gsm.h|gsm.h|' \
		${WRKSRC}/configure \
		${WRKSRC}/libavcodec/libgsmdec.c
	@${REINPLACE_CMD} -e 's|$$(LIBDIR)/pkgconfig|${STAGEDIR}${PREFIX}/libdata/pkgconfig|' \
		${WRKSRC}/library.mak

post-configure-DOCS-off:
	@${REINPLACE_CMD} -e 's|CONFIG_TEXI2HTML=yes|!CONFIG_TEXI2HTML=yes|' ${WRKSRC}/config.mak

post-install:
.for a in bin/avconv bin/avprobe lib/libav/libavcodec.so.57.25.0\
	lib/libav/libavdevice.so.56.1.0 lib/libav/libavfilter.so.6.7.0\
	lib/libav/libavformat.so.57.7.2 lib/libav/libavresample.so.3.0.0\
	lib/libav/libavutil.so.55.20.0 lib/libav/libswscale.so.4.0.0
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/${a}
.endfor

.include <bsd.port.mk>
