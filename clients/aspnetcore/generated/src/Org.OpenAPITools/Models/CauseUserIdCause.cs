/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class CauseUserIdCause : IEquatable<CauseUserIdCause>
    { 
        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }

        /// <summary>
        /// Gets or Sets ShortDescription
        /// </summary>
        [DataMember(Name="shortDescription")]
        public string ShortDescription { get; set; }

        /// <summary>
        /// Gets or Sets UserId
        /// </summary>
        [DataMember(Name="userId")]
        public string UserId { get; set; }

        /// <summary>
        /// Gets or Sets UserName
        /// </summary>
        [DataMember(Name="userName")]
        public string UserName { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CauseUserIdCause {\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("  ShortDescription: ").Append(ShortDescription).Append("\n");
            sb.Append("  UserId: ").Append(UserId).Append("\n");
            sb.Append("  UserName: ").Append(UserName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((CauseUserIdCause)obj);
        }

        /// <summary>
        /// Returns true if CauseUserIdCause instances are equal
        /// </summary>
        /// <param name="other">Instance of CauseUserIdCause to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CauseUserIdCause other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Class == other.Class ||
                    Class != null &&
                    Class.Equals(other.Class)
                ) && 
                (
                    ShortDescription == other.ShortDescription ||
                    ShortDescription != null &&
                    ShortDescription.Equals(other.ShortDescription)
                ) && 
                (
                    UserId == other.UserId ||
                    UserId != null &&
                    UserId.Equals(other.UserId)
                ) && 
                (
                    UserName == other.UserName ||
                    UserName != null &&
                    UserName.Equals(other.UserName)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (Class != null)
                    hashCode = hashCode * 59 + Class.GetHashCode();
                    if (ShortDescription != null)
                    hashCode = hashCode * 59 + ShortDescription.GetHashCode();
                    if (UserId != null)
                    hashCode = hashCode * 59 + UserId.GetHashCode();
                    if (UserName != null)
                    hashCode = hashCode * 59 + UserName.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(CauseUserIdCause left, CauseUserIdCause right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(CauseUserIdCause left, CauseUserIdCause right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
