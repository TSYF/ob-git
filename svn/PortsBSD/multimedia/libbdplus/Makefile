# Created by: kamikaze@bsdforen.de
# $FreeBSD: head/multimedia/libbdplus/Makefile 559842 2021-01-01 16:10:08Z pi $

PORTNAME=	libbdplus
DISTVERSION=	0.1.2
PORTREVISION=	1
CATEGORIES=	multimedia
MASTER_SITES=	https://download.videolan.org/pub/videolan/${PORTNAME}/${DISTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	BD+ System research implementation

LICENSE=	LGPL21

LIB_DEPENDS=	libaacs.so:multimedia/libaacs \
		libgcrypt.so:security/libgcrypt \
		libgpg-error.so:security/libgpg-error

USES=		autoreconf libtool pkgconfig tar:bzip2
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-optimizations

.include <bsd.port.mk>
