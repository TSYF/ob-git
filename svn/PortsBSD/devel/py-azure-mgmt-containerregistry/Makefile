# $FreeBSD: head/devel/py-azure-mgmt-containerregistry/Makefile 569349 2021-03-27 17:31:00Z dbaio $

PORTNAME=	azure-mgmt-containerregistry
DISTVERSION=	3.0.0rc17
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Microsoft Azure Container Registry Client Library for Python

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}msrest>=0.5.0:net-mgmt/py-msrest@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}msrestazure>=0.4.32<2.0.0:net-mgmt/py-msrestazure@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-common>=1.1:www/py-azure-common@${PY_FLAVOR}

USES=		azurepy python:3.6+ zip
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
