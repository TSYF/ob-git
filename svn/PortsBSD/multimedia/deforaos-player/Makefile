# Created by: Olivier Cochard-Labbe <olivier@FreeBSD.org>
# $FreeBSD: head/multimedia/deforaos-player/Makefile 517065 2019-11-08 13:59:51Z tobik $

PORTNAME=	player
PORTVERSION=	0.1.6
PORTREVISION=	3
CATEGORIES=	multimedia
MASTER_SITES=	http://www.defora.org/os/download/download/4297/
PKGNAMEPREFIX=	deforaos-
DISTNAME=	Player-${PORTVERSION}

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	DeforaOS desktop media player

LICENSE=	GPLv3

BUILD_DEPENDS=	xsltproc:textproc/libxslt \
		${LOCALBASE}/share/xsl/docbook/manpages/docbook.xsl:textproc/docbook-xsl
LIB_DEPENDS=	libSystem.so:devel/deforaos-libsystem \
		libDesktop.so:x11/deforaos-libdesktop
RUN_DEPENDS=	mplayer:multimedia/mplayer

MAKE_ARGS+=	PREFIX=${PREFIX}
USE_GNOME=	gtk20
USES=		desktop-file-utils gettext gnome pkgconfig

MAKE_ENV+=	MANDIR=${STAGEDIR}${MANPREFIX}/man

post-install: compress-man

.include <bsd.port.mk>
