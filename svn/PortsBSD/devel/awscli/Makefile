# Created by: Alexey V. Degtyarev <alexey@renatasystems.org>
# $FreeBSD: head/devel/awscli/Makefile 569162 2021-03-24 21:29:19Z bhughes $

PORTNAME=	awscli
PORTVERSION=	1.19.36
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP

MAINTAINER=	bhughes@FreeBSD.org
COMMENT=	Universal Command Line Interface for Amazon Web Services

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}botocore>=1.20.36:devel/py-botocore@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}colorama>=0.2.5:devel/py-colorama@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}s3transfer>=0.3.0:net/py-s3transfer@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}docutils>=0.10:textproc/py-docutils@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}rsa>=3.1.2:security/py-rsa@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}yaml>=3.10:devel/py-yaml@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils concurrent noflavors

NO_ARCH=	yes
SUB_FILES=	pkg-message

.include <bsd.port.mk>
