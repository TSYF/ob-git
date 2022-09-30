# $FreeBSD: head/multimedia/rubygem-gstreamer/Makefile 568947 2021-03-22 10:17:43Z danfe $

PORTNAME=	gstreamer
PORTVERSION=	3.4.3
CATEGORIES=	multimedia rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby binding to GStreamer

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

LIB_DEPENDS=	libgstreamer-1.0.so:multimedia/gstreamer1
RUN_DEPENDS=	rubygem-gobject-introspection>=${PORTVERSION}:devel/rubygem-gobject-introspection

USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
