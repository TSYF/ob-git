# Created by: Yinghong.Liu <liu_yinghong@yahoo.com.cn>
# $FreeBSD: head/multimedia/mimms/Makefile 533115 2020-04-27 09:32:31Z amdmi3 $

PORTNAME=	mimms
DISTVERSION=	3.2.1
CATEGORIES=	multimedia net
MASTER_SITES=	SAVANNAH

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Download streams using the MMS protocol

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libmms.so:net/libmms

USES=		python:2.7 tar:bzip2
USE_PYTHON=	distutils
PYDISTUTILS_PKGVERSION=	3.2
NO_ARCH=	yes

PORTDOCS=	AUTHORS COPYING NEWS README

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for doc in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${doc} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
