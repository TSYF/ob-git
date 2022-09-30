# $FreeBSD: head/devel/qt5/Makefile 569118 2021-03-24 13:34:35Z rene $

PORTNAME=	qt5
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Cross-platform application and UI framework (metaport)

# * phonon4 is not part of Qt itself.
# * we don't want to pull in wayland just yet.
# XXX(rene) exclude webengine
USE_QT=		${_USE_QT_ALL:Nphonon4:Ndeclarative:Nwayland:Nwebengine:S/$/_run/}
USES=		metaport qt:5

.include <bsd.port.mk>
