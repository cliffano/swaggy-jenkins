/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * API version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type DefaultCrumbIssuer struct {

	Class string `json:"_class,omitempty"`

	Crumb string `json:"crumb,omitempty"`

	CrumbRequestField string `json:"crumbRequestField,omitempty"`
}
