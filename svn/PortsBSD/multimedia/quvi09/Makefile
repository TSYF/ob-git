# Created by: Toni Gundogdu <legatvs@gmail.com>
# $FreeBSD: head/multimedia/quvi09/Makefile 486268 2018-11-30 20:02:11Z sunpoet $

PORTNAME=	quvi
PORTVERSION=	0.9.5
PORTREVISION=	2
CATEGORIES=	multimedia devel
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION:R}/${PORTNAME}/ \
		LOCAL/sunpoet
PKGNAMESUFFIX=	09

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Command line tool for parsing flash media stream URLs

LICENSE=	AGPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${RUN_DEPENDS}
LIB_DEPENDS=	libcurl.so:ftp/curl
RUN_DEPENDS=	libquvi09>=0.9:multimedia/libquvi09

USES=		gettext-runtime gnome pkgconfig tar:xz

CONFIGURE_ARGS=	--program-suffix=${PKGNAMESUFFIX}
GNU_CONFIGURE=	yes
USE_GNOME=	glib20

PLIST_SUB=	PKGNAMESUFFIX=${PKGNAMESUFFIX}

.include <bsd.port.mk>
