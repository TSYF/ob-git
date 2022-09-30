# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: head/multimedia/rage/Makefile 548076 2020-09-09 09:54:05Z arrowd $

PORTNAME=	rage
PORTVERSION=	0.3.1
CATEGORIES=	multimedia enlightenment
MASTER_SITES=	http://download.enlightenment.org/rel/apps/${PORTNAME}/

MAINTAINER=	enlightenment@FreeBSD.org
COMMENT=	EFL video and audio player with some extra bells and whistles

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libefl.so:devel/efl

DIST_SUBDIR=	enlightenment
USES=		compiler:c11 desktop-file-utils meson pkgconfig tar:xz

.include <bsd.port.mk>
