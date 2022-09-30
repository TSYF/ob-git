# $FreeBSD: head/devel/gammaray/Makefile 569118 2021-03-24 13:34:35Z rene $

PORTNAME=	gammaray
PORTVERSION=	2.11.2
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Debugging tool for Qt-application

DEPRECATED=	Uses EOL Python 2.7 via www/qt5-webengine
EXPIRATION_DATE=2021-06-23

USES=		cmake kde:5 pkgconfig qt:5

USE_QT=		3d concurrent core declarative designer gui help linguisttools \
		location network printsupport script scripttools svg uiplugin \
		webchannel webengine widgets xml buildtools_build qdoc_build \
		qmake_build
USE_KDE=	coreaddons syntaxhighlighting

USE_GITHUB=	yes
GH_ACCOUNT=	KDAB
GH_PROJECT=	GammaRay

PLIST_SUB+=	ARCH=${ARCH:S/amd64/x86_64/} \
		PORTMAJMIN=${PORTVERSION:C/(.*)\..*/\1/} \
		PORTVERSION=${PORTVERSION} \
		QTVER=${QT5_VERSION:C/\./_/:C/\..*//}

.include <bsd.port.mk>
