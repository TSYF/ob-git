# $FreeBSD: head/multimedia/fpc-libvlc/Makefile 556252 2020-11-25 02:57:50Z acm $

CATEGORIES=	multimedia lang
PKGNAMESUFFIX=	-libvlc

COMMENT=	Free Pascal interface to vlc media player library

USES=		fpc
USE_FPC=	fcl-base fcl-res rtl-objpas

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	VLC
VLC_DESC=	Install vlc media player
VLC_RUN_DEPENDS=	vlc:multimedia/vlc

.include "${MASTERDIR}/Makefile"
